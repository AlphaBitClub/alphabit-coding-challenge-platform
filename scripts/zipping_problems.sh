#!/bin/sh -e

if [[ $# -ne 1 ]]
then
    echo "Usage: $0 <PROBLEMS_DIR>"
    echo "  For example: $0 ./problems"
    exit 1
fi

PROBLEMS_DIR=$(realpath $1)
if [[ ! -d ${PROBLEMS_DIR} ]]
then
    echo "error directory doesn't exist: ${PROBLEMS_DIR}"
    exit 2
fi

cd ${PROBLEMS_DIR}

for PROBLEM in $(ls -d */ | tr -d '/')
do
    cd ${PROBLEM}
    zip -qr "../${PROBLEM}.zip" *
    echo "[+] zipping done: $(realpath ../${PROBLEM}.zip)"
    cd ${PROBLEMS_DIR}
done