#include <stdio.h>
#include <stdlib.h>
/*
Entrada e saída de texto com scanf

Solicite ao usuário que digite seu nome e, em seguida, imprima "Olá, [nome]!" usando scanf para ler o nome.

*/

int main() {
    char name[50];
    printf("What's your name? \n");
    scanf("%s", name);
    printf("Oh, your name is %s too?\n", name);
    
    return 0;
}