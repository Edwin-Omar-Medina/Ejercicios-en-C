#include<stdio.h>
#include<conio.h>

void cuadrado(){
    int num,cudrado;
    printf("Ingrese un numero: ");
    scanf("%i",&num);
    cudrado=num*num;
    printf("\nEl cuadrado del numero %i es: %i\n",num,cudrado);
}
void producto(){
    int num1,num2,producto;
    printf("Ingrese el valor 1: ");
    scanf("%i",&num1);
    printf("Ingrese el valor 2: ");
    scanf("%i",&num2);
    producto=num1*num2;
    printf("\nEl prducto de los numeros %i y %i es: %i\n",num1,num2,producto);
}
void espacio(){
    printf("--------------------------------------------------\n");
}

int main(){
    cuadrado();
    espacio();
    producto();
    getch();
    return 0;

}
