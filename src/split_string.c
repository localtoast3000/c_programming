#include "error_messages.h"
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf(ARGS_INVALID);
        return EXIT_FAILURE;
    }
}