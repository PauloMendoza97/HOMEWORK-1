#include <stdio.h>
#include <stdlib.h>

int main()
{
    int base,i,potencia,cont;
    printf("Ingrese un numero: ");
    scanf("%i",&base);
    cont=1;
    printf("Ingrese su exponente: ");
    scanf("%i",&potencia);
    for(i=1;i<=potencia;i++)  cont*=base;
    printf("\n%i elevado a la potencia %i es igual a: %i\n",base,potencia,cont);
    return 0;
}

