#include<stdio.h>
#include<conio.h>
#define TAM 5


struct persona{
    char nombre[40];
    int edad;
};

typedef struct persona tpersonas[TAM];


void cargar (tpersonas personas){
    for(int f=0;f<TAM;f++){
        printf("Ingrese el nombre: ");
        gets(personas[f].nombre);
        printf("Ingrese la edad: ");
        scanf("%i",&personas[f].edad);
        fflush(stdin);
        printf("\n");
    }
}

void imprimir(tpersonas personas){
    for(int f=0;f<TAM;f++){
        printf("%s %i \n",personas[f].nombre,personas[f].edad);
    }
}

int main(){
    tpersonas personas;
    cargar(personas);
    imprimir(personas);
    getch();
    return 0;
}
