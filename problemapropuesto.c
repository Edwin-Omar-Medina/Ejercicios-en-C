#include<stdio.h>
#include<conio.h>

float cargadedatos(float vec[5]){
    for(int x=0; x<5;x++){
        printf("Ingrese el %i valor: ",x+1);
        scanf("%f",&vec[x]);
    }
}

float promedio (float vec[5]){
    float contador=0;
    float prom;
    for(int x=0;x<5;x++){
        contador=contador+vec[x];
    }
    prom=contador/5;
    return prom;
}


void altasbajas(float vec[5], float prom){
    int altos=0;
    int bajos=0;
    for(int x=0; x<5;x++){
        if(vec[x]>prom){
            altos++;
        }else{
            bajos++;
        }
    }
    printf("\nCantidad mas alta de el promedio: %i ",altos);
    printf("\ncantidad mas baja del promedio %i",bajos);

}

int main(){
    float vector[5];
    cargadedatos(vector);
    float prom;
    printf("El promedio es: ");
    prom=promedio(vector);
    printf("%0.2f",prom);
    altasbajas(vector,prom);
    getch();
    return 0;
}
