/**
 * @file memory.h
 * @brief Abstraction of memory read and write operations
 *
 * This header file provides an abstraction of reading and
 * writing to memory via function calls. 
 *
 * @author Adnan Adel
 * @date August 23 2023
 *
 */
#ifndef __MEMORY_H__
#define __MEMORY_H__

#include "../std_types.h"

/**
 * @brief Sets a value of a data array 
 *
 * Given a pointer to a char data set, this will set a provided
 * index into that data set to the value provided.
 *
 * @param ptr Pointer to data array
 * @param index Index into pointer array to set value
 * @param value value to write the the locaiton
 *
 * @return void.
 */
void set_value(char * ptr, unsigned int index, char value);

/**
 * @brief Clear a value of a data array 
 *
 * Given a pointer to a char data set, this will clear a provided
 * index into that data set to the value zero.
 *
 * @param ptr Pointer to data array
 * @param index Index into pointer array to set value
 *
 * @return void.
 */
void clear_value(char * ptr, unsigned int index);

/**
 * @brief Returns a value of a data array 
 *
 * Given a pointer to a char data set, this will read the provided
 * index into that data set and return the value.
 *
 * @param ptr Pointer to data array
 * @param index Index into pointer array to set value
 *
 * @return Value to be read.
 */
char get_value(char * ptr, unsigned int index);

/**
 * @brief Sets data array elements to a value
 *
 * Given a pointer to a char data set, this will set a number of elements
 * from a provided data array to the given value. The length is determined
 * by the provided size parameter.
 *
 * @param ptr Pointer to data array
 * @param value value to write the the locaiton
 * @param size Number of elements to set to value
 *
 * @return void.
 */
void set_all(char * ptr, char value, unsigned int size);

/**
 * @brief Clears elements in a data array
 *
 * Given a pointer to a char data set, this will set a clear a number
 * of elements given the size provided. Clear means to set to zero. 
 *
 * @param ptr Pointer to data array
 * @param size Number of elements to set to zero
 *
 * @return void.
 */
void clear_all(char * ptr, unsigned int size);


/**
 * @brief moves data from source to destination
 *
 * This function takes two byte pointers (one source and one destination) 
 * and a length of bytes to move from the source location to the destination. 
 *
 * @param src Pointer to the current location of data.
 * @param dst Pointer to the location where data should go.
 * @param length Length of Data
 *
 * @return a pointer to the destination (dst).
 */
uint8_t * my_memmove(uint8_t * src, uint8_t * dst, uint32_t length);


/**
 * @brief Copies data from source to destination
 *
 * This function takes two byte pointers (one source and one destination) 
 * and a length of bytes to copy from the source location to the destination. 
 *
 * @param src Pointer to the current location of data.
 * @param dst Pointer to the location where data should go.
 * @param length Length of Data
 *
 * @return a pointer to the destination (dst).
 */
uint8_t * my_memcopy(uint8_t * src, uint8_t * dst, uint32_t length);

/**
 * @brief sets value in a given mem-location to a given value.
 *
 * This function takes a pointer to source memory location 
 * and a length of bytes and set all locations of that memory to a given value. 
 *
 * @param src Pointer to the current location of data.
 * @param length Length of Data.
 * @param value value to be set in source location.
 *
 * @return a pointer to the source (src).
 */
uint8_t * my_memset(uint8_t * src, uint32_t length, uint8_t value);

/**
 * @brief sets value in a given mem-location to zero.
 *
 * This function takes a pointer to source memory location 
 * and a length of bytes and set all locations of that memory to zero. 
 *
 * @param src Pointer to the current location of data.
 * @param length Length of Data.
 *
 * @return a pointer to the source (src).
 */
uint8_t * my_memzero(uint8_t * src, uint32_t length);

/**
 * @brief reverse the order of all of the bytes in a given memory location.
 *
 * This function takes a pointer to source memory location 
 * and a length of bytes and reverse the order of all of the bytes. 
 *
 * @param src Pointer to the current location of data.
 * @param length Length of Data.
 *
 * @return a pointer to the source (src).
 */
uint8_t * my_reverse(uint8_t * src, uint32_t length);

/**
 * @brief reserve words in HEAP.
 *
 * takes number of words to allocate in dynamic memory 
 *
 * @param length Length of Data.
 *
 * @return return a pointer to memory if successful, or a Null Pointer if not successful
 */
uint32_t * reserve_words(uint32_t length);

/**
 * @brief free words in HEAP.
 *
 * free a dynamic memory allocation by providing the pointer src to the function 
 *
 * @param src Pointer to the current location of data.
 *
 * @return No return
 */
void free_words(uint32_t * src);


#endif /* __MEMORY_H__ */
