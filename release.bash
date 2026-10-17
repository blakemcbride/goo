#!/bin/bash
# Build a goo source release tarball from the current git tree.
# Usage: ./release.bash <version>     e.g. ./release.bash 0.156
# Produces releases/goo-<version>.tar.gz with configure included and
# the demo/experiment directories pruned.

set -e
cd "$(dirname "$0")"

version=${1:?usage: release.bash <version>}
goo=goo-$version

autoconf                        # make sure configure is current
mkdir -p releases
rm -rf releases/$goo
git archive --format=tar --prefix=$goo/ HEAD | tar -x -C releases
cp configure releases/$goo/
rm -rf releases/$goo/src/demos \
       releases/$goo/src/extras \
       releases/$goo/src/interpreters \
       releases/$goo/src/music \
       releases/$goo/src/nest \
       releases/$goo/src/samurui
tar -C releases -czf releases/$goo.tar.gz $goo
rm -rf releases/$goo

echo "releases/$goo.tar.gz"
