#include<stdio.h>
#include<conio.h>
#include<string.h>

#define TAMANO 4

struct producto {
    int codigo;
    char descripcion[41];
    float precio;
};

void cargar(struct producto vec[TAMANO]){
    for(int f=0;f<TAMANO;f++){
        printf("Ingrese el codigo del producto: ");
        scanf("%i",&vec[f].codigo);
        fflush(stdin);
        printf("Ingrese la descripcion: ");
        gets(vec[f].descripcion);
        printf("Ingrese el precio: ");
        scanf("%f",&vec[f].precio);

    }
}

void imprimir(struct producto vec[TAMANO]){
    for (int f=0;f<TAMANO;f++){
        printf("%i  %s  %0.2f\n",vec[f].codigo,vec[f].descripcion, vec[f].precio);
    }
}

void preciomayor(struct producto vec[TAMANO]){
    int pos=0;
    for(int f=1;f<TAMANO;f++){
        if(vec[f].precio>vec[pos].precio){
            pos=f;
        }
    }
    printf("El producto mas caro es: %s",vec[pos].descripcion);
}

int main(){
    struct producto vector[TAMANO];
    cargar(vector);
    imprimir(vector);
    preciomayor(vector);
    getch();
    return 0;

}
