#include<stdio.h>
#include<conio.h>

struct producto{
    int codigo;
    char descripcion[41];
    float precio;
};


int main(){
    struct producto pro1, pro2;
    printf("Ingrese el codigo del producto: ");
    scanf("%i",&pro1.codigo);
    fflush(stdin);
    printf("Ingrese la descripcion del producto: ");
    gets(pro1.descripcion);
    printf("Ingrese el precio: ");
    scanf("%f",&pro1.precio);
    printf("\n");
    printf("\n");
    printf("Ingrese el codigo del producto: ");
    scanf("%i",&pro2.codigo);
    fflush(stdin);
    printf("Ingrese la descripcion del producto: ");
    gets(pro2.descripcion);
    printf("Ingrese el precio: ");
    scanf("%f",&pro2.precio);

    if(pro1.precio>pro2.precio){
        printf("El producto %s tiene un precio mayor",pro1.descripcion);
    }else{
        if(pro2.precio>pro1.precio){
            printf("El producto %s tiene mayor precio",pro2.descripcion);
        }else{
            printf("Los productos tienen un mismo precio");
        }
    }
}
