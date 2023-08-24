#include "lexical.h"

static char Delimmiters[20]= {',', ';', '\'', '\"', '{', '}', '(', ')', '[',
                        ']', '+', '-', '*', '/', '=', '<', '>', ' '};

static char* Keywords[35]= {"auto", "break", "case", "char", "const", "continue",
                      "default", "do", "double", "else", "enum", "extern", 
                      "float", "for", "goto", "if", "int", "long", "register",
                      "return", "short", "signed", "sizeof", "static",
                      "struct", "switch", "typedef", "union", "unsigned",
                      "void", "volatile", "while"};

static char Arithmetic_operators[5]= {'+', '-', '*', '/', '%'};

static char* Assignment_operators[6]={"=", "+=", "-=", "*=", "/=", "%="};

static char* Relational_operators[6]={"==", ">", "<", "!=", ">=", "<="};

static char* Logical_operators[3]={"&&", "||", "!"};

static char* Bitwise_operators[6]={"&", "|", "^", "~", ">>", "<<"};

uint8_t is_valid_delimiter(const char ch)
{
    uint8_t ret_flag= is_char_in_arr(ch, Delimmiters, DELIMITERS_LENGTH);
    return ret_flag; 
}

uint8_t is_valid_keyword(const char* str)
{
    if(NULL == str)
    {
        return 0;
    }
    else
    {
        uint8_t ret_flag= is_str_in_arr(str, Keywords, KEYWORDS_LENGTH);
        return ret_flag;
    }
}

uint8_t is_valid_Arithmetic_op(const char ch)
{
    uint8_t ret_flag= is_char_in_arr(ch, Arithmetic_operators, ARITH_OP_LENGTH);
    return ret_flag;
}

uint8_t is_valid_Assignment_op(const char* str)
{
    if(NULL == str)
    {
        return 0;
    }
    else
    {
        uint8_t ret_flag= is_str_in_arr(str, Assignment_operators, ASSIGN_OP_LENGTH);
        return ret_flag;
    }
}

uint8_t is_valid_Relational_op(const char* str)
{
    if(NULL == str)
    {
        return 0;
    }
    else
    {
        uint8_t ret_flag= is_str_in_arr(str, Relational_operators, REL_OP_LENGTH);
        return ret_flag;
    }
}

uint8_t is_valid_Logical_op(const char* str)
{
    if(NULL == str)
    {
        return 0;
    }
    else
    {
        uint8_t ret_flag= is_str_in_arr(str, Logical_operators, LOG_OP_LENGTH);
        return ret_flag;
    }
}

uint8_t is_valid_Bitwise_op(const char* str)
{
    if(NULL == str)
    {
        return 0;
    }
    else
    {
        uint8_t ret_flag= is_str_in_arr(str, Bitwise_operators, BITWISE_OP_LENGTH);
        return ret_flag;
    }
}
