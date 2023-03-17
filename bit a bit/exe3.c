#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
/*
Solicite um valor para a variável x e um índice b que indica um dos bits da variável. Ligue
o bit correspondente. Exiba o valor original e o resultado.
*/

int main()
{
    uint8_t posicao = 4; //posicao do bit (equivale ao 32)
    posicao = posicao ^ 1; // soma o valor
    uint8_t valor = 88; // valor original
    printf("Original: %d\n", valor);
    valor |= 1 << posicao; //ligando o bit especifico
    printf("Resultado: %d\n", valor);

}

