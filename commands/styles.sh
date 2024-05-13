#!/bin/bash

separator() {
    echo "--------------------------------------------------"
}

header() {
    echo -e "\e[1;34m$1\e[0m"
}

info() {
    echo -e "\e[1;32m$1\e[0m"
}

error() {
    echo -e "\e[1;31m$1\e[0m"
}