#!/bin/bash
source "$(dirname "$0")/commands/styles.sh"

clean() {
    separator
    header "Cleaning the build directory..."
    separator
    rm -rf build
    success "Clean completed."
    separator
}