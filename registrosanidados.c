#include<stdio.h>
#include<conio.h>

#define TAMANO 3

struct fecha {
    int dd;
    int mm;
    int aa;
};

struct producto {
    int codigo;
    char descripcion[41];
    float precio;
    struct fecha fechavencimiento;
};


void cargar(struct producto vec[TAMANO]){
    for (int f=0;f<TAMANO;f++){
        printf("Ingrese el codigo de producto: ");
        scanf("%i",&vec[f].codigo);
        fflush(stdin);
        printf("Ingrese la descripcion: ");
        gets(vec[f].descripcion);
        printf("Ingrese el precio: ");
        scanf("%f",&vec[f].precio);
        printf("Fecha de vencimiento \n");
        printf("Dia: ");
        scanf("%i",&vec[f].fechavencimiento.dd);
         printf("Mes: ");
        scanf("%i",&vec[f].fechavencimiento.mm);
         printf("Año: ");
        scanf("%i",&vec[f].fechavencimiento.aa);
        printf("\n");
    }
}

void imprimir(struct producto vec[TAMANO]){
    for(int f=0;f<TAMANO;f++){
        printf("%i  %s  %0.2f  %i/%i/%i\n",vec[f].codigo,vec[f].descripcion,vec[f].precio,
               vec[f].fechavencimiento.dd,vec[f].fechavencimiento.mm,vec[f].fechavencimiento.aa
               );
    }
}

int main(){
    struct producto vec[TAMANO];
    cargar(vec);
    imprimir(vec);
    getch();
    return 0;
}
