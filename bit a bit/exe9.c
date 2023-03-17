#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
/*
Solicite um valor para a variável x. Inverta o valor dos 3 bits mais significativos da
variável x.
*/


int main(){

    uint8_t valor = 97;
    valor = valor ^ 0xE0;

    printf("%hu",valor);
    return 0;
}
