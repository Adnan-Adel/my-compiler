#include "Lexical/lexical.h"

int main(void)
{
    uint8_t name1[]= "Adnan";
    uint8_t name2[]= "Adel";
    uint8_t* tst= str_parse(name1, 1, 2);
    printf("%s\n", tst);

    uint8_t ret= is_valid_keyword("extern");
    printf("ret= %d\n", ret);

    ret= is_valid_delimiter('o');
    printf("ret= %d\n", ret);

    ret= is_valid_Relational_op(">=");
    printf("ret= %d\n", ret);

    return 0;
}