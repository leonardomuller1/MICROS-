#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
/*
Solicite um valor para a variável x e um índice b que indica um dos bits da variável.
Mantenha o valor daquele bit, zere os demais. Exiba o valor original e o resultado.
*/

int main()
{
    uint8_t valor = 88;
    uint8_t valorOriginal = valor;
    uint8_t Desligar = 0;
    uint8_t cont = 4;

    Desligar = (Desligar|(0x01<<cont));
    valor = valor&Desligar;
    printf("Valor original: %hu",valorOriginal);
    printf("\nResultado: %hu",valor);

    return 0;
}
