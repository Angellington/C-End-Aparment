#include <stdio.h>
#include <stdlib.h>
/*
Leitura e impressão de números

Solicite ao usuário para digitar um número inteiro e um número float, e depois imprima ambos os valores.
*/

int main() {
    system("clear");
    int n1;
    float n2;

    printf("Tab a number: ");
    scanf("%d", &n1);
    printf("Tab a float: ");
    scanf("%f\n", &n2);
    printf("Your number are: %d and %.2f", n1, n2);

    return 0;
}