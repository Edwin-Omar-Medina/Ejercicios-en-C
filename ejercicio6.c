#include<stdio.h>
#include<conio.h>

int main(){
    int num1, num2;
    printf("Ingrese el valor 1: ");
    scanf("%i",&num1);
    printf("Ingrese el valor 2: ");
    scanf("%i",&num2);
    if(num1>num2){
        printf("El numero mayor es: ");
        printf("%i",num1);
    }else{
        printf("El numero mayor es: ");
        printf("%i",num2);
    }
    getch();
    return 0;

}

