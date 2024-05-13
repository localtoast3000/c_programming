#!/bin/bash

# Function definitions
build() {
    echo "Building the project..."
    mkdir -p build
    pushd build > /dev/null
    cmake .. -DCMAKE_BUILD_TYPE=Release -DCMAKE_C_COMPILER=gcc -DCMAKE_CXX_COMPILER=g++
    cmake --build .
    if [[ $? -ne 0 ]]; then
        echo "Build failed."
        return 1
    fi
    popd > /dev/null
    echo "Build completed successfully."
}

clean() {
    echo "Cleaning the build directory..."
    rm -rf build
    echo "Clean completed."
}

run() {
    if [ -z "$1" ]; then
        echo "Please specify the program to run. Example: ./cprogs.sh run myprogram"
        return 1
    fi
    echo "Running the program: $1"
    ./build/bin/$1
}

# Main script execution starts here

# Check for at least one command
if [ $# -eq 0 ]; then
    echo "Usage: $0 [build|clean|run <program_name>]"
    exit 1
fi

# Parse the command
case "$1" in
    build)
        build
        ;;
    clean)
        clean
        ;;
    run)
        shift
        run "$1"
        ;;
    *)
        echo "Invalid command. Usage: $0 [build|clean|run <program_name>]"
        exit 1
        ;;
esac