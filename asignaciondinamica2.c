#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>

struct producto {
    int codigo;
    char descripcion[41];
    float precio;
};


int main()
{
    struct producto *prod;

    prod=malloc(sizeof(struct producto));

    prod->codigo=1;
    strcpy(prod->descripcion,"papas");
    prod->precio=10.50;

    printf("Codigo del articulo:%i\n",prod->codigo);
    printf("Descripcion:%s\n",prod->descripcion);
    printf("Precio:%0.2f",prod->precio);

    free(prod);

    getch();
    return 0;
}
