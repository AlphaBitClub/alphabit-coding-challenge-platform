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


echo "[..] Building Docker image for ${DOMSERVER} using domjudge/domserver image"
docker image build -t "${DOMSERVER}:${VERSION}" -f "${DOCKERFILE_DOMSERVER}" .
echo "[ok] Done building Docker image for ${JUDGEHOST}"


echo "[..] Building Docker image for ${JUDGEHOST}:${VERSION}-build using domjudge/judgehost image"
docker image build -t "${JUDGEHOST}:${VERSION}" -f ${DOCKERFILE_JUDGEHOST} .
echo "[ok] Done building Docker image for ${JUDGEHOST}:${VERSION}"
