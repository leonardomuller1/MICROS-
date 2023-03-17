#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
/*
Solicite um valor para a variável x e um índice b que indica um dos bits da variável.
Mantenha o valor daquele bit, ligue os demais. Exiba o valor original e o resultado.
*/

int main() {
    uint8_t valor = 88, posicao = 4, mascara, resultado;


    // Cria uma máscara com apenas a posição bit definido como 1
    mascara = 1 << posicao;

    // Extraia o valor da posição bit
    int bitValor = (valor & mascara) >> posicao;

    // Coloca todos os outros valores em 1
    resultado = valor | (~mascara);

    // Defina a posição do bit para seu valor original
    resultado &= ~(mascara & ~bitValor);


    printf("Valor original: %hu\n", valor);
    printf("Resultado: %hu\n", resultado);

    return 0;
}
