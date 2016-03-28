#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cont,fact,i;
    cont=1;
    printf("Ingrese un numero: ");
    scanf("%i",&fact);
    for (i=fact;i>=1;i--)  cont*=i;
    printf("El factorial de %i es: %i",fact,cont);
    return 0;
}
