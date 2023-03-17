#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>


/*
Solicite um valor para a variável x. Calcule o complemento deste valor.
*/


int main() {
    uint8_t x;
    printf("Entre com o valor de x: ");
    scanf("%hu", &x);

    uint8_t complemento = ~x;

    printf("O complemento de %hu eh %hu.\n", x, complemento);
    return 0;
}
