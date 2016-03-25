#include <stdio.h>
#include "src/utils.h"
#include "src/address.h"

int main(int argc, char *argv[])
{
    Address *addr = (Address *)malloc(sizeof(Address));
    char *name = "frost";
    char *email = "frostwong@gmail.com";
    addr->id = 10;
    addr->name = name;
    addr->email = email;

    Address_print(addr);
    return 0;
}
