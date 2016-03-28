#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    float cont,i;
    printf("Ingrese un numero: ");
    scanf("%i",&num);
    for(i=1;i<=num;i++)
    {
        cont+=1.0/i;

    }
    printf("\n%f",cont);


    return 0;
}
