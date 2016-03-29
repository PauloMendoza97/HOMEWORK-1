#include <stdio.h>
#include <stdlib.h>
//Leer por teclado tres ńumero naturales, imprimirlos en orden.
int main()
{
    int n1,n2,n3;
    printf("Ingrese el primer numero: ");
    scanf("%i",&n1);
    printf("Ingrese el segundo numero: ");
    scanf("%i",&n2);
    printf("Ingrese el tercer numero: ");
    scanf("%i",&n3);
    if(n1<n2)
    {
        if(n1<n3)
        {
            if(n2<n3) printf("%i,%i,%i",n1,n2,n3);
            else printf("%i,%i,%i",n1,n3,n2);
        }
        else printf("%i,%i,%i",n3,n1,n2);
    }
    else
    {
        if(n2<n3)
        {
            if(n1<n3) printf("%i,%i,%i",n2,n1,n3);
            else printf("%i,%i,%i",n2,n3,n1);
        }
        else printf("%i,%i,%i",n3,n2,n1);
    }

    return 0;
}
