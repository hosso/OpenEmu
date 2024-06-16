#!/bin/sh

set -e

REPO=hosso/OpenEmu-extended

usage() {
  echo "Usage: ${0##*/} {build|download|dispatch}"
}

if [ $# -lt 1 ]; then
  usage
  exit 1
fi

cd UME/deps/mame

CMD=$1

case ${CMD} in
build)
  make macosx_x64_clang OSD=headless verbose=1 TARGETOS=macosx CONFIG=release TARGET=mame SUBTARGET=arcade MACOSX_DEPLOYMENT_TARGET=12.4 -j8
  install_name_tool -id mamearcade_headless.dylib mamearcade_headless.dylib     
  ;;
download)
  gh -R ${REPO} run download -n mamearcade_headless.dylib
  ;;
dispatch)
  gh -R ${REPO} workflow run mamearcade_headless.yml
  ;;
*)
  usage
  exit 1
  ;;
esac
