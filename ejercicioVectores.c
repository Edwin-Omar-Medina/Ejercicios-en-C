#include<stdio.h>
#include<conio.h>

int main(){
    int f;
    int sueldos[5];
    //carga del vector
    for(f=0;f<5;f++){
        printf("Ingrese el valor del sueldo: ");
        scanf("%i",&sueldos[f]);
    }
    printf("\n");
    for(f=0;f<5;f++){
        printf("El ");
        printf("%i",f+1);
        printf(" sueldo es: ");
        printf("%i",sueldos[f]);
        printf("\n");
    }
    getch();
    return 0;
}
