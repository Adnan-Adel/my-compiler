/**
 * @file memory.c
 * @brief Abstraction of memory read and write operations
 *
 * This implementation file provides an abstraction of reading and
 * writing to memory via function calls. There is also a globally
 * allocated buffer array used for manipulation.
 *
 * @author Adnan Adel
 * @date August 23 2023
 *
 */
#include "memory.h"
#include <stdlib.h>

/***********************************************************
 Function Definitions
***********************************************************/
void set_value(char * ptr, unsigned int index, char value)
{
  ptr[index] = value;
}

void clear_value(char * ptr, unsigned int index)
{
  set_value(ptr, index, 0);
}

char get_value(char * ptr, unsigned int index)
{
  return ptr[index];
}

void set_all(char * ptr, char value, unsigned int size)
{
  unsigned int i;
  for(i = 0; i < size; i++) {
    set_value(ptr, i, value);
  }
}

void clear_all(char * ptr, unsigned int size)
{
  set_all(ptr, 0, size);
}



uint8_t * my_memmove(uint8_t * src, uint8_t * dst, uint32_t length)
{
    uint8_t* dst_ptr_l= dst;
    while(length != 0)
    {
        *dst_ptr_l= *src;
        dst_ptr_l++;
        src++;
        length--; 
    }
    return dst;
}

uint8_t * my_memcopy(uint8_t * src, uint8_t * dst, uint32_t length)
{
  uint8_t* src_ptr_l= src;
  uint8_t* dst_ptr_l= dst; 

  while(length != 0)
  {
    *dst_ptr_l= *src_ptr_l;
    dst_ptr_l++;
    src_ptr_l++;
    length--;
  }
  return dst;
}

uint8_t * my_memset(uint8_t * src, uint32_t length, uint8_t value)
{
  uint8_t* src_ptr_l= src;
  while(length != 0)
  {
    *src_ptr_l= value;
    src_ptr_l++;
    length--;
  }
  return src;
}

uint8_t * my_memzero(uint8_t * src, uint32_t length)
{
  uint8_t* src_ptr_l= src;
  while(length != 0)
  {
    *src_ptr_l= 0;
    src_ptr_l++;
    length--;
  }
  return src;
}

uint8_t * my_reverse(uint8_t * src, uint32_t length)
{
  uint8_t* src_ptr_l= src;
  uint8_t temp;
  uint32_t index_i= 0;
  uint32_t last_element_index= length-1;

  for(index_i= 0; index_i < length/2; index_i++)
  {
    temp= *(src_ptr_l + index_i);
    *(src_ptr_l + index_i)= *(src_ptr_l + last_element_index);
    *(src_ptr_l + last_element_index)= temp;
    last_element_index--;
  }
  return src;
}

uint32_t * reserve_words(uint32_t length)
{
  uint32_t* reserved_ptr= (uint32_t*)malloc(length * sizeof(length));
  return reserved_ptr;
}

void free_words(uint32_t * src)
{
  free(src);
}