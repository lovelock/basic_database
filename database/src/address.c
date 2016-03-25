#include "address.h"

void Address_print(Address *addr)
{
    printf("id: %d\tname: %s\temail: %s\n", addr->id, addr->name, addr->email);
}
