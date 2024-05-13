#!/bin/bash
source "$(dirname "$0")/commands/utils.sh"
source "$(dirname "$0")/commands/styles.sh"

build() {
    separator
    header "Building the project..."
    separator
    mkdir -p build
    pushd build > /dev/null

    local generator=$(detect_os)
    if [ "$generator" = "Unsupported OS" ]; then
        error "\nUnsupported operating system.\n"
        return 1
    fi

    cmake .. -G "$generator" -DCMAKE_BUILD_TYPE=Release -DCMAKE_C_COMPILER=gcc -DCMAKE_CXX_COMPILER=g++
    cmake --build .
    if [[ $? -ne 0 ]]; then
        error "Build failed."
        popd > /dev/null
        return 1
    fi
    popd > /dev/null
    separator
    success "Build completed successfully."
    separator
}