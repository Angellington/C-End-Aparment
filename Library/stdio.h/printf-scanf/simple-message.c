#include <stdio.h>
#include <stdlib.h>

int main() {
    system("clear");
    char name[] = "Minerva Alves";
    printf("Hello, my name is %s!\n", name);
    // Now, using pointers
    char *nombre = "Minerva Barbosa";
    printf("Hello, my name is %s!\n", nombre);
    return 0;
}