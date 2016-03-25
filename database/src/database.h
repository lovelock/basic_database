#ifndef DATABASE_H
#define DATABASE_H

#include <stdio.h>
#include <stdlib.h>
#include "structs.h"

void Database_create(Connection *conn);
void Database_open(Connection *conn);
void Database_load(Connection *conn);

void Database_set(Connection *conn, int id, const char *name, const char *email);
void Database_list(Connection *conn);
Address *Database_get(Connection *conn, int id);

void Database_write(Connection *conn);
void Database_close(Connection *conn);

#endif
