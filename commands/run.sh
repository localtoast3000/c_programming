#!/bin/bash
source "$(dirname "$0")/commands/styles.sh"

run() {
    if [ -z "$1" ]; then
        error "Please specify the program to run. Example: ./cprogs.sh run myprogram"
        if [ -d "./build/bin" ]; then
            header "Available executables in ./build/bin:"
            ls ./build/bin | while read line; do
                info "  $line"
            done
        else
            error "No executables found. Please build the project first."
        fi
        separator
        return 1
    fi
    header "Running the program: $1"
    ./build/bin/$1
    separator
}