#include "../std_types.h"
#include <stdio.h>
#include <stdlib.h>

/* --------------------- Functions Declarations --------------------- */

/**
 * @brief Calculate length of a string.
 *
 * @param str Pointer to the first char of the string.
 *
 * @return return the length of string.
 */
uint32_t str_length(char* str);

/**
 * @brief Compares two strings and returns a flag.
 *        1-> Strings are the same.
 *        0-> Not the same.  
 *
 * @param str1 Pointer to the first char of a string1.
 * @param str2 Pointer to the first char of a string2.
 *
 * @return returns a flag (1 or 0).
 */
char compare_str(char* str1, char* str2);

/**
 * @brief parse the string to put the part from left to right from that string in another
 *
 * @param src_str Pointer to the first char of the string.
 * @param left the first character you will start from.
 * @param right the lat character you will end at.
 *
 * @return returns a pointer to the generated string.
 */
char* str_parse(char* src_str, uint32_t left, uint32_t right);