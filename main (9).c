#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n1,n2,n3,n4,cont;
    printf("Ingrese el primer numero: \n");
    scanf("%i",&n1);
    printf("Ingrese el segundo numero: \n");
    scanf("%i",&n2);
    printf("Ingrese el tercer numero: \n");
    scanf("%i",&n3);
    printf("Ingrese el cuarto numero: \n");
    scanf("%i",&n4);
    if(n1<n2)
    {
       if(n3<n4)
       {
           if(n1<n3) cont=n1;
           else cont=n3;
       }
       else if(n1<n4) cont=n1;
            else cont=n4;

    }
    else if(n3<n4)
       {
           if(n2<n3) cont=n2;
           else cont=n3;
       }
       else if(n2<n4) cont=n2;
            else cont=n4;

    for(i=cont;i>=1;i--)
    {
        if(n1%i==0&&n2%i==0&&n3%i==0&&n4%i==0)
        {
            n1/=i;
            n2/=i;
            n3/=i;
            n4/=i;
            printf("\nEL maximo comun divisor es: %i\n",i);
            break;
        }
    }
    return 0;
}
