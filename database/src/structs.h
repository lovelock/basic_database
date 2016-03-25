#ifndef STRUCTS_H
#define STRUCTS_H

#define MAX_DATA 512
#define MAX_ROWS 100

struct Addr {
    int id;
    int set;
    char *name;
    char *emai;
};

typedef struct Addr Address;

struct DB {
    Address rows[MAX_ROWS];
};

typedef struct DB Database;

struct Conn {
    FILE *file;
    Database *db;
};

typedef struct Conn Connection;

#endif
