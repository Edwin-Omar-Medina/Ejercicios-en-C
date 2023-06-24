#include<stdio.h>
#include<conio.h>

int main(){
    int num1, num2, num3, num4, suma, producto;

    printf("Ingrese el primer numero: ");
    scanf("%i",&num1);
    printf("\n");
    printf("Escribir el segundo numero: ");
    scanf("%i",&num2);
    printf("\n");
    printf("Ingrese el tercer numero: ");
    scanf("%i",&num3);
    printf("\n");
    printf("Ingrese el cuarto numero: ");
    scanf("%i",&num4);
    printf("\n");


    suma=num1+num2;
    producto=num3*num4;

    printf("La suma de los dos primeros numeros es: ");
    printf("%i",suma);
    printf("\n");
    printf("El producto de los dos ultimos numeros es: ");
    printf("%i",producto);

    getch();
    return 0;

}
