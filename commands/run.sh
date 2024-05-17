#!/bin/bash
source "$(dirname "$0")/commands/styles.sh"

run() {
    if [ -z "$1" ]; then
        separator
        header "Usage: ./cprogs run <program_name>"
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

    program_name=$1
    shift  # Remove the first argument (program name) and keep the rest as arguments

    separator
    header "Running the program: $program_name"
    header --------------------------------------------------
   ./build/bin/"$program_name" "$@"
    success --------------------------------------------------
    success "Program end"
    separator
}