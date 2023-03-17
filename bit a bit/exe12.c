#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>


/*
Solicite um valor para a variável x. Calcule o complemento-2 deste valor.
*/


int main() {
    uint8_t x;
    printf("Entre com o valor de x: ");
    scanf("%hu", &x);

    uint8_t complemento = ~x + ~1;

    printf("O complemento de %hu eh %hu.\n", x, complemento);
    return 0;
}
