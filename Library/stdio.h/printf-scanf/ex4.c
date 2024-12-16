#include <stdio.h>
#include <stdlib.h>

int main() {
    char name[50];
    printf("What's your name? ");
    scanf("%s\n", name);
    printf("So, your name is  %s", name);
    return 0;
}