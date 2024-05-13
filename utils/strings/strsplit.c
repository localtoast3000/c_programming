#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char **strsplit(char *input, char delimiter, int *num_parts) {
    char *input_tmp = strdup(input);
    if (!input_tmp) {
        perror("Failed to copy input");
        return NULL;
    }

    int delimiter_count = 0;
    for (int i = 0; input[i]; i++) {
        if (input[i] == delimiter) {
            delimiter_count++;
        }
    }

    char **parts = malloc(sizeof(char *) * (delimiter_count + 2));
    if (!parts) {
        perror("Failed to allocate memory for parts array");
        free(input_tmp);
        return NULL;
    }

    int idx = 0;
    char *part = strtok(input_tmp, &delimiter);

    while (part) {
        parts[idx++] = strdup(part);
        if (!parts[idx - 1]) {
            for (int j = 0; j < idx - 1; j++) {
                free(parts[j]);
            };
            free(parts);
            free(input_tmp);
            return NULL;
        }
        part = strtok(NULL, &delimiter);
    }
    parts[idx] = NULL;

    if (!num_parts) {
        *num_parts = idx;
    }
    free(input_tmp);
    return parts;
}