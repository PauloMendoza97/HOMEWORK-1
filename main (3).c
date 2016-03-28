#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,cont,variable;
    cont=variable=0;
    printf("Cuantos numeros desea ingresar?: ");
    scanf("%i",&cont);
    for(i=1;i<=cont;i++)
    {
        printf("\n%i.Ingrese un numero que termine en cero: ",i);
        scanf("%i",&variable);
        printf("\tNUMERO:%i\tCUADRADO:%i",variable,variable*variable);
    }
    return 0;
}
