#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>


int main(){
    char *palabra;
    int cant;
    printf("Cuantas letras tiene la palabra que ingresara: ");
    scanf("%i",&cant);
    fflush(stdin);
    palabra=malloc((cant+1)*sizeof(char));
    printf("Ingrese ahora la palabra: ");
    gets(palabra);
    printf("La palabra ingresada es %s ",palabra);
    free(palabra);
    getch();
    return 0;
}
