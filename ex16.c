#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <string.h>

struct Person {
    char *name;
    int age;
    int height;
    int weight;
};

typedef struct Person Human;

Human *Person_create(char *name, int age, int height, int weight)
{
    Human *who = (Human *)malloc(sizeof(Human));
    assert(who != NULL);

    who->name = strdup(name);
    who->age = age;
    who->height = height;
    who->weight = weight;

    return who;
}

void Person_destroy(Human *who)
{
    assert(who != NULL);

    free(who->name);
    free(who);
}

void Person_print(Human *who)
{
    printf("Name %s\n", who->name);
    printf("Age %d\n", who->age);
    printf("Height %d\n", who->height);
    printf("Weight %d\n", who->weight);
}

int main(int argc, char *argv[])
{

    Human *joe = Person_create("Jeo Alax", 32, 53, 532);
    Human *frank = Person_create("Frank Blank", 342, 422, 32);

    printf("Jeo is at memory location %p\n", joe);
    Person_print(joe);
    printf("frank is at memory location %p\n", frank);
    Person_print(frank);

    joe->age += 20;
    joe->height += 100;
    joe->weight += 100;
    Person_print(joe);

    frank->age += 30;
    frank->height += 30;
    frank->weight += 40;

    Person_destroy(joe);
    Person_destroy(frank);

    return 0;
}
