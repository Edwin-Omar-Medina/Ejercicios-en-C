#include<stdio.h>
#include<conio.h>

int main()
{
    int num1, num2, suma, producto;
    printf("Ingrese el primer numero: ");
    scanf("%i",&num1);
    printf("Ingrese el segundo numero: ");
    scanf("%i",&num2);
    suma = num1 + num2;
    producto = num1 * num2;
    printf("El valor de la suma de los dos numeros es: ");
    printf("%i",suma);
    printf("\n");
    printf("El valor de la multiplicación de los numeros es: ");
    printf("%i",producto);
    getch();
    return 0;

}
