#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>

void ingresarClave(){
    char clave[50];
    int intentos=0;
    do{
        if(intentos==3){
            exit(1);
        }
        printf("Ingrese clave: ");
        gets(clave);
        intentos++;
    }while(strcmp(clave, "123abc")!=0);
}

int main(){
    ingresarClave();
    printf("Bienvenido\n");
    getch();
    return 0;

}
