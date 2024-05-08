#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
    printf("Executable %s\n", argv[0]);

    if (argc > 1) {
        for (int i = 1; i < argc; i++) {
            printf("Argument %d: %s\n", i, argv[i]);
        }
    } else {
        printf("No Arguments found\n");
    }
    return EXIT_SUCCESS;
}