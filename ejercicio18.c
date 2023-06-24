#include<stdio.h>
#include<conio.h>
#include<string.h>

int main(){
    int vector[5];
    cargar(vector);
    imprimir(vector);
    getch();
    return 0;
}

void cargar(int vec[5]){
    for(int x=0;x<5;x++){
        printf(("Ingrese elemento: "));
        scanf("%i",&vec[x]);
    }
}

void imprimir(int vec[5]){
    printf("Contenido completo del vector\n");
    for(int x=0;x<5;x++){
        printf("%i",vec[x]);
    }
}
