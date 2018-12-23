#!/bin/sh -e

CHROOTDIR="/chroot/domjudge"
INSTALL_SCRIPT="judgehost_chroot_install_deps.sh"
INSTALL_SCRIPT_PATH="/opt/${INSTALL_SCRIPT}"

cp ${INSTALL_SCRIPT_PATH} ${CHROOTDIR}/opt/
cp /etc/resolv.conf ${CHROOTDIR}/etc/resolv.conf
mount --bind /proc ${CHROOTDIR}/proc
chroot ${CHROOTDIR} /opt/${INSTALL_SCRIPT}
umount ${CHROOTDIR}/proc
