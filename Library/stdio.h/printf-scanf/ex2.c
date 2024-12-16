#include <stdio.h>
#include <stdlib.h>

/* Declare uma variável inteira e uma variável float. Atribua valores a elas e imprima ambas usando printf. */

int main() {
    int minuto = 10;
    float segundo = 1.5;
    float kilowatt = 75.4;

    printf("%d, %.2f\n", minuto, segundo);
    printf("Seu whatsapp está a %.1f kilowatt por hora.\n", kilowatt);
    
    return 0;
}