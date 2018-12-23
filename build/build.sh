#!/bin/sh -e

VERSION=$1
if [[ -z ${VERSION} ]]
then
    echo "Usage: $0 version"
    echo "  For example: $0 0.1"
    exit 1
fi

AUTHOR="Bilal Retiat bilalphilomath@gmail.com"
COMMIT_MSG="install additional dependencies"
JUDGEHOST_CMD="/opt/wait && /scripts/start.sh"

DOMSERVER="alphabit_domserver"
JUDGEHOST="alphabit_judgehost"

DOCKERFILE_DOMSERVER="Dockerfile_domserver"
DOCKERFILE_JUDGEHOST="Dockerfile_judgehost"

JUDGEHOST_CHROOT="/opt/judgehost_chroot.sh"

echo "[..] Building Docker image for ${DOMSERVER} using domjudge/domserver image"
docker image build -t "${DOMSERVER}:${VERSION}" -f "${DOCKERFILE_DOMSERVER}" .
echo "[ok] Done building Docker image for ${JUDGEHOST}"


echo "[..] Building Docker image for ${JUDGEHOST}:${VERSION}-build using domjudge/judgehost image"
# build
docker image build -t "${JUDGEHOST}:${VERSION}-build" -f ${DOCKERFILE_JUDGEHOST} .
# delete the old container if exists
docker container rm -f "${JUDGEHOST}-${VERSION}-build" > /dev/null 2>&1 || true
# run a new container with --privileged, in order to mount the chroot
docker container run -it --name "${JUDGEHOST}-${VERSION}-build" --privileged "${JUDGEHOST}:${VERSION}-build" "${JUDGEHOST_CHROOT}"
# create the final build from the build container including the changes (installed deps)
docker container commit -a "${AUTHOR}" -m "${COMMIT_MSG}" -c "CMD ${JUDGEHOST_CMD}" "${JUDGEHOST}-${VERSION}-build" "${JUDGEHOST}:${VERSION}"
# cleanup
echo "[..] Clean up ..."
docker container rm -f "${JUDGEHOST}-${VERSION}-build"
docker image rm "${JUDGEHOST}:${VERSION}-build"
echo "[ok] Done building Docker image for ${JUDGEHOST}:${VERSION}"
