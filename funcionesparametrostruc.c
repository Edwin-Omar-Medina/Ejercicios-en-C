#include<stdio.h>
#include<conio.h>
#include<string.h>

struct producto{
    int codigo;
    char descripcion[41];
    float precio;

};


void imprimir(struct producto p){
    printf("Codigo de producto: %i\n",p.codigo);
    printf("Descripcion:%s\n",p.descripcion);
    printf("Precio: %0.2f",p.precio);
}

int main(){
    struct producto pro={1,"naranja",12.50};
    imprimir(pro);
    getch();
    return 0;
}
