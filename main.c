#include <stdio.h>
#include <stdlib.h>
//Escribir su nombre en la pantalla 10 veces.
int main()
{
    int cont,i;
    printf("Cantidad de veces que desea que se repita su nombre: ");
    scanf("%d",&cont);
    for(i=0;i<cont;i++) printf("PAULO CESAR MENDOZA OCHOA\n");
    return 0;
}
