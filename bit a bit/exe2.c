#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
/*
Solicite um valor para a variável x. Coloque os bits impares (1,3,5..) de x em 0. Exiba o
valor original e o resultado.
*/

int main()
{
    uint8_t x = 3;
    x =  x|0xaa;
    printf("%hu\n",x);
    printf("0x%x\n",x);

    return 0;
}
