#!/bin/bash

separator(){
    echo -e "--------------------------------------------------"
}

header() {
    echo -e "\033[0;34m$1\033[0m"  # blue
}

info() {
    echo -e "\033[0;33m$1\033[0m"  # yellow
}

success() {
    echo -e "\033[0;32m$1\033[0m"  # green
}

error() {
    echo -e "\033[0;31m$1\033[0m"  # red
}