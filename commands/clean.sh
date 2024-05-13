#!/bin/bash
source "$(dirname "$0")/commands/styles.sh"

clean() {
    header "Cleaning the build directory..."
    rm -rf build
    info "Clean completed."
    separator
}