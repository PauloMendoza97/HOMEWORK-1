#include <stdio.h>
#include <stdlib.h>
//Leer por teclado un ńumero entero positivo n, calcular la suma de los n  primeros numeros enteros positivos
int main()
{
    int suma,cont,i;
    cont=suma=0;
    printf("Ingrese un numero: ");
    scanf("%i",&cont);
    for(i=1;i<=cont;i++) suma+=i;
    printf("\nLa suma total de los %i",cont);
    printf(" primeros numeros es: %i\n",suma);
    return 0;
}
