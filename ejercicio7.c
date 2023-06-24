#include<stdio.h>
#include<conio.h>

int main(){
    int nota1, nota2, nota3, promedio;
    printf("Ingrese el valor de la primera nota: ");
    scanf("%i",&nota1);
    printf("\n");
    printf("Ingrese el valor de la segunda nota: ");
    scanf("%i",&nota2);
    printf("\n");
    printf("Ingrese el valor de la tercera nota: ");
    scanf("%i",&nota3);
    printf("\n");
    promedio=(nota1+nota2+nota3)/3;
    if(promedio>=7){
        printf("PROMOCIONADO ");

    }else {
        if(promedio>=4 && promedio<7){
            printf("REGULAR");
        }else{
            printf("REPROBADO");
        }
    }
    getch();
    return 0;

}

