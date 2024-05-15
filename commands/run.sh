#!/bin/bash
source "$(dirname "$0")/commands/styles.sh"

run() {
    if [ -z "$1" ]; then
        separator
        header "Usage: ./cprogs run myprogram"
        separator
        if [ -d "./build/bin" ]; then
            info "Available executables in ./build/bin:\n"
            ls ./build/bin | while read line; do
                echo -e "  $line"
            done
        else
            error "No executables found. Please build the project first."
        fi
        separator
        return 1
    fi
    separator
    header "Running the program: $1"
    separator
    ./build/bin/$1
    separator
    success "Program end"
    separator
}