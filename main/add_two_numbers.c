#include "../constants/error_messages.h"
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc != 3) {
        printf(ARGS_INVALID);
        return EXIT_FAILURE;
    }

    int a = atoi(argv[1]);
    int b = atoi(argv[2]);

    printf("%d", a + b);

    return EXIT_SUCCESS;
}