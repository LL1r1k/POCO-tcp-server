#!/bin/bash
set -e

CURRENT_DIR=$(pwd)
BUILD_DIR="${CURRENT_DIR}"/build
INSTALL_DIR="${CURRENT_DIR}"/install

mkdir -p "${BUILD_DIR}"
cd "${BUILD_DIR}"

#run cmake
cmake .. -GNinja

#build and install targets
cmake --build .
cmake --install . --prefix "${INSTALL_DIR}" --config Release
rm -rf "${BUILD_DIR}"
