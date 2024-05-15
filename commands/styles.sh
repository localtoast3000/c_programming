#!/bin/bash

separator(){
    echo -e "--------------------------------------------------"
}

header() {
    echo -e "\e[0;34m$1\e[0m"  # blue
}

info() {
    echo -e "\e[0;33m$1\e[0m"  # yellow
}

success() {
    echo -e "\e[0;32m$1\e[0m"  # green
}

error() {
    echo -e "\e[0;31m$1\e[0m"  # red
}