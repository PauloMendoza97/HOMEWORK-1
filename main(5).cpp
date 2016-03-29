#include <stdio.h>
#include <stdlib.h>
//Leer por teclado un ńumero entero positivo n, imprimir la suma de los n primos enteros positivos menores que n.
int main()
{
    int cont,primo,i,j;
    primo=1;
    printf("Ingrese un numero: ");
    scanf("%i",&cont);
    for(i=1;i<cont;i++)
    {
        for(j=2;j<=i;j++)
        {
            if(i%j==0)
            {
                if(i!=j) break;
                else primo+=i;
            }

        }
    }
    printf("\nLa suma de los numeros primos menores a %i",cont);
    printf(" es: %i\n",primo);

    return 0;
}
