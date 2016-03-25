#ifndef CONNECTION_H
#define CONNECTION_H

#include <stdlib.h>
#include "database.h"

struct Connection {
    FILE *file;
    struct Database *db;
};
#endif
