#!/bin/bash

# Detect the operating system
detect_os() {
    case "$(uname -s)" in
        Linux* | Darwin*)
            echo "Unix Makefiles"
            ;;
        CYGWIN* | MINGW32* | MSYS* | MINGW*)
            echo "MinGW Makefiles"
            ;;
        *)
            echo "Unsupported OS"
            return 1
            ;;
    esac
}