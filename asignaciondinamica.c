#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
    int *pe;
    int tam;
    int f;
    printf("Cuantos elementos tendra el vector:");
    scanf("%i",&tam);
    pe=malloc(tam*sizeof(int));
    for(f=0;f<tam;f++)
    {
        printf("Ingrese elemento:");
        scanf("%i",&pe[f]);
    }
    printf("Contenido del vector dinamico: ");
    for(f=0;f<tam;f++)
    {
        printf("%i ",pe[f]);
    }
    free(pe);
    getch();
    return 0;
}
