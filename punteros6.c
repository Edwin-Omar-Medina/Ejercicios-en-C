#include<stdio.h>
#include<conio.h>
#define TAMANO 5

void cargar (float *p){
    for(int f=0;f<TAMANO;f++){
        printf("Ingrese elementos: ");
        scanf("%f",&p[f]);
    }
}

void imprimir(float *p){
    for(int f=0; f<TAMANO;f++){
        printf("%0.2f",p[f]);
    }
}

int main(){
    float vec[TAMANO];
    cargar(vec);
    imprimir(vec);
    getch();
    return 0;
}
