#include "String/my_string.h"
#include "Memory/memory.h"

int main(void)
{
    uint8_t name1[]= "Adnan";
    uint8_t name2[]= "Adel";
    uint8_t* tst= my_memcopy(name1, name2, 4);
    printf("%s\n", tst);

    return 0;
}