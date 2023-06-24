#include<stdio.h>
#include<conio.h>

void cargar(char articulos[3][31])
{
    int f;
    for(f=0;f<3;f++)
    {
        printf("Ingrese el nombre del articulo:");
        gets(articulos[f]);
    }
}

void imprimir(char articulos[3][31])
{
    int f;
    printf("Listado completo de articulos\n");
    for(f=0;f<3;f++)
    {
        printf("%s\n",articulos[f]);
    }
}


int main()
{
    char articulos[3][31];
    cargar(articulos);
    imprimir(articulos);
    getch();
    return 0;
}
