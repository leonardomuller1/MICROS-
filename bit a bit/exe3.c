#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
/*
Solicite um valor para a variável x. Coloque os bits pares (0,2,4,etc) de x em 1. Exiba o
valor original e o resultado.
*/

int main()
{
    uint8_t x = 2;
    x =  x|0x55;
    printf("%hu\n",x);
    printf("0x%x\n",x);

    return 0;
}
