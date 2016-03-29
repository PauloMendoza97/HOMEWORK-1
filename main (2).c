#include <stdio.h>
#include <stdlib.h>

//Escribir un programa para contar espacios en blanco, tabs y saltos de linea.
int main()
{
    int esp,tab,salto;
    esp=tab=salto=0;
    int c=getchar();
    while(c!=EOF)
    {
        if(c==32) esp+=1;
        if(c==9) tab++;
        if(c==10) salto++;
    c=getchar();
    }
    printf("El numero de espacios ingresados es: %d\n",esp);
    printf("El numero de tabulaciones ingresadas es: %d\n",tab);
    printf("El numero de saltos de linea ingresados es: %d\n",salto);
    return 0;
}
