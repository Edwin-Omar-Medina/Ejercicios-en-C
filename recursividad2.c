#include<stdio.h>
#include<conio.h>

int factorial(int fact){
    if(fact>0){
            int valor=fact*factorial(fact-1);
            return valor;
    }else{
        return 1;
    }
}

int main(){
    printf("El factorial de 4 es: %i",factorial(4));
    getch();
    return 0;
}
