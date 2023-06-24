#include<stdio.h>
#include<conio.h>

#define TAMANO 5
#define PFINROGRAMA "Gracias por usar nuestro programa"

void cargar(int sueldos[TAMANO]){
    for(int f=0;f<TAMANO;f++){
        printf("Ingrese el sueldo: ");
        scanf("%i",&sueldos[f]);
    }
}


void imprimir(int sueldos[TAMANO]){
    printf("Listado de sueldos de empleados\n");
    for(int f=0;f<TAMANO;f++){
        printf("%i\n",sueldos[f]);
    }
}


int main(){
    int sueldos[TAMANO];
    cargar(sueldos);
    imprimir(sueldos);
    printf(PFINROGRAMA);
    getch();
    return 0;
}
