#include<stdio.h>
#include<conio.h>

void imprimir(int x){
    if(x>0){
        imprimir(x-1);
        printf("%i",x);
    }
}

int main(){
    imprimir(5);
    getch();
    return 0;
}
