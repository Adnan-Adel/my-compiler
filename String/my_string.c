#include "my_string.h"

uint32_t str_length(char* str)
{
    if(NULL == str)
    {
        return 0;
    }
    else
    {
        uint32_t index_i= 0;
        while(str[index_i] != '\0')
        {
            index_i++;
        }
        return index_i;
    }
}

char compare_str(char* str1, char* str2)
{
    if((NULL == str1) || (NULL == str2))
    {
        return 0;
    }
    else
    {
        uint32_t str1_length= str_length(str1);
        uint32_t str2_length= str_length(str2);
        if(str1_length != str2_length)
        {
            return 0;   // Not the same.
        }
        else
        {
            uint32_t index_i= 0;
            while(str1[index_i] != '\0')
            {
                if(str1[index_i] != str2[index_i])
                {
                    return 0;
                }
                index_i++;
            }
            return 1;   // the two strings are identical.
        }
    }
}

char* str_parse(char* src_str, uint32_t left, uint32_t right)
{
    uint32_t dst_str_length= right - left + 1;
    uint32_t index_i= left;

    char* dst_str_ptr= (char*)malloc((dst_str_length+1) * sizeof(char));
    while((index_i <= right) && (src_str[index_i] != '\0'))
    {
        *dst_str_ptr= src_str[index_i];
        dst_str_ptr++;
        index_i++;
    }
    *dst_str_ptr= '\0';

    return (dst_str_ptr-dst_str_length);
}