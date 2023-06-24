#include<stdio.h>
#include<conio.h>

#define CANT 5

void cargar(int vec[CANT]){
    for(int f=0;f<CANT;f++){
        printf("Ingrese elemento: ");
        scanf("%i",&vec[f]);
    }
}

int retornarSuma(int vec[CANT]){
    int suma=0;
    for(int f=0;f<CANT;f++){
        suma+=vec[f];
    }
    return suma;
}

int retornarProducto(int vec[CANT]){
    int prod=1;
    for(int f=0;f<CANT;f++){
            prod*=vec[f];
    }
    return prod;
}

int main(){
    int vec[CANT];
    cargar(vec);
    printf("La suma de los componentes: %i\n",retornarSuma(vec));
    printf("El producto de sus componentes es: %i",retornarProducto(vec));
    getch();
    return 0;
}
