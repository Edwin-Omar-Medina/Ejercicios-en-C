
#include<stdio.h>
#include<conio.h>


struct producto {
    int codigo;
    char descripcion[41];
    float precio;
};


void cargar(struct producto *pprod){
    printf("Ingrese el codigo: ");
    scanf("%i",&pprod->codigo);
    fflush(stdin);
    printf("Ingrese la descripcion: ");
    gets(&pprod->descripcion);
    printf("Ingrese el precio: ");
    scanf("%f",&pprod->precio);
    printf("\n");
}

void imprimir(struct producto prod){
    printf("Codigo: %i\n",prod.codigo);
    printf("Descripcion: %s\n",prod.descripcion);
    printf("precio: %0.2f",prod.precio);
}

int main(){
    struct producto prod;
    cargar(&prod);
    imprimir(prod);
    getch();
    return 0;
}
