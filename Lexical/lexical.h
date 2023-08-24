#include "../String/my_string.h"

#define DELIMITERS_LENGTH       18
#define KEYWORDS_LENGTH         32

#define ARITH_OP_LENGTH         5
#define ASSIGN_OP_LENGTH        6
#define REL_OP_LENGTH           6
#define LOG_OP_LENGTH           3
#define BITWISE_OP_LENGTH       6

/* --------------------- Functions Declarations --------------------- */
uint8_t is_valid_delimiter(const char ch);

uint8_t is_valid_keyword(const char* str);

uint8_t is_valid_Arithmetic_op(const char ch);

uint8_t is_valid_Assignment_op(const char* str);

uint8_t is_valid_Relational_op(const char* str);

uint8_t is_valid_Logical_op(const char* str);

uint8_t is_valid_Bitwise_op(const char* str);

