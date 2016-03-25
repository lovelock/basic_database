#include <stdio.h>

int main(int argc, char *argv[])
{
    int distance = 100;
    float power = 2.345f;
    double super_power = 56790.4322;
    char initial = 'A';
    char first_name[] = "Zed";
    char last_name[] = "Shaw";

    printf("%d\n", distance);
    printf("%7.3f\n", power);
    printf("%10.6lf\n", super_power);
    printf("%c\n", initial);
    printf("%s\n", first_name);
    printf("%s\n", last_name);
    return 0;
}
