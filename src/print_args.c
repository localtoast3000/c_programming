#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
    if (argc > 1) {
        char *path = argv[0];

        printf("Executable %s\n", path);

        for (int i = 1; i < argc; i++) {
            printf("Argument %d: %s\n", i, argv[i]);
        }
    } else {
        printf("No Arguments found\n");
    }
    return EXIT_SUCCESS;
}