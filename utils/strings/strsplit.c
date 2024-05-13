#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * Splits a string into an array of strings based on a given delimiter.
 *
 * This function takes an input string and a delimiter, splits the input
 * string wherever the delimiter occurs, and returns an array of the resulting
 * substrings. Each substring is dynamically allocated. The function also
 * sets the an optional integer pointer num_parts to the number of parts split.
 *
 * Parameters:
 *   input (char *): The input string to be split. This string is not modified.
 *   delimiter (char *): The delimiter string used to split the input string.
 *                   The function assumes the delimiter is a single character.
 *   num_parts (int *): Optional pointer to an integer where the function will
 *                      store the number of substrings created by the split.
 *                      If NULL is passed, the count of parts is not returned.
 *
 * Returns:
 *   char **: An array of string pointers, each pointing to a dynamically
 *            allocated substring. The array itself is dynamically allocated
 *            and terminated with a NULL pointer to mark the end of the array.
 *            Returns NULL if there is an error during the execution, such as
 *            failure to allocate memory.
 *
 * Error Handling:
 *   The function prints an error message to stderr if it fails to duplicate
 *   the input string or allocate memory for the output array. On error, any
 *   allocated memory is freed before returning NULL.
 *
 * Example Usage:
 *   int count;
 *   char **substrings = strsplit("one,two,three", ",", &count);
 *   if (substrings) {
 *       for (int i = 0; i < count; i++) {
 *           printf("Substring[%d]: %s\n", i, substrings[i]);
 *           free(substrings[i]);  // Free each substring
 *       }
 *       free(substrings);  // Free the array of substrings
 *   }
 *
 * Note:
 *   The caller is responsible for freeing both the strings and the array of
 * strings returned by this function. Each string and the array itself must be
 * individually freed using free().
 */

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