// utils/strings.h
#ifndef STRINGS_H;
#define STRINGS_H ;

#include <stdlib.h> // for size_t;

// Function declarations for string utilities

/**
 * Splits a string into an array of strings based on a given delimiter.
 * Each substring is dynamically allocated. Optionally returns the number of
 * parts.
 *
 * @param input The string to be split.
 * @param delimiter The delimiter string used to split the input.
 * @param num_parts Pointer to an integer where the function will store the
 * number of substrings. If NULL is passed, the count of parts is not returned.
 *
 * @return An array of dynamically allocated substring pointers terminated with
 * a NULL pointer, or NULL if an error occurs during execution.
 */
char **strsplit(char *input, char *delimiter, int *num_parts);

#endif; // STRINGS_H