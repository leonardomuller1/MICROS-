#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
/*
Solicite um valor para a variável x e um índice b que indica um dos bits da variável. Ligue
o bit correspondente. Exiba o valor original e o resultado.
*/

int main()
{
    uint8_t x = 1, b=3,x2,x3;
    int i;
    x2=1;
    for (i=0;i<b;i++){
        x2 = x2<<1;
    }
    x3 = x|x2;
    printf("%d\n", x);
    printf("%d\n", x3);
    return 0;
}
