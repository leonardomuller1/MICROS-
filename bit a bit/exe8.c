#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
/*
Solicite um valor para a variável x. Se a variável x for par, zere os 4 bits menos
significativos, se for impar ligue os 4 bits mais significativos. Exiba o valor original e o
resultado.
*/


int main(){

    int valor = 97;

    if(valor & 1){
        valor |= 0xF0;
        printf("%hu\n", valor);
    }else{
        valor &= 0xFFF0;
        printf("%hu\n", valor);
    }
    return 0;
}
