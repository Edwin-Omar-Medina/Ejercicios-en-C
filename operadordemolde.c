#include<stdio.h>
#include<conio.h>

int main(){
    int nota1,nota2,nota3;
    float promedio;
    printf("Ingrese la primera nota: ");
    scanf("%i",&nota1);
    printf("\n");
    printf("Ingrese la segunda nota: ");
    scanf("%i",&nota2);
    printf("\n");
    printf("Ingrese la tercera nota: ");
    scanf("%i",&nota3);
    promedio=(float)(nota1+nota2+nota3)/3;
    printf("\nEl promedio de las notas es: %0.02f",promedio);
    getch();
    return 0;
}
