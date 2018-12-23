#!/bin/sh -e

# install deps inside the chroot
apt-get update && apt-get install --no-install-recommends --no-install-suggests -y python3