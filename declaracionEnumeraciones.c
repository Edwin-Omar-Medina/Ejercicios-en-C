#include<stdio.h>
#include<conio.h>
#include<time.h>

#define CANTIDAD 10


enum texiste {NO, SI};


void cargar(int vec[CANTIDAD]){
    int f;
    srand(time(NULL));
    for (f=0; f<CANTIDAD;f++){
        vec[f]=rand()%100+1;
    }
}


void imprimir(int vec[CANTIDAD]){
    int f;
    for(f=0;f<CANTIDAD;f++){
        printf("%i ",vec[f]);
    }
    printf("\n\n");
}

void consulta(int vec[CANTIDAD]){
    int f;
    int valor;
    printf("Ingrese el valor a buscar dentro del vector ");
    scanf("%i",&valor);
    enum texiste existe=NO;
    for(f=0;f<CANTIDAD;f++){
        if(valor==vec[f]){
            existe=SI;
        }
    }
    if(existe == SI){
        printf("El valor ingresado esta dentro del vector");
    }else{
        printf("El valor ingresado no esta dentro del vector");
    }

}

int main(){
    int vec[CANTIDAD];
    cargar(vec);
    imprimir(vec);
    consulta(vec);
    getch();
    return 0;
}




