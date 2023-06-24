#include<stdio.h>
#include<conio.h>



void cargar (int sueldos[5]){
    for(int x=0;x<5;x++){
        printf("Ingrese el sueldo: ");
        scanf("%i",&sueldos[x]);
    }
}


void ordenar(int sueldos[5]){
   int k,f;
    for (k = 0; k < 4; k++)
    {
        for (f = 0; f < 4 - k; f++)
        {
            if (sueldos[f] > sueldos[f + 1])
            {
                int aux;
                aux = sueldos[f];
                sueldos[f] = sueldos[f + 1];
                sueldos[f + 1] = aux;
            }
        }
    }
}

void imprimir(int sueldos[5])
{
    int x;
    for(x=0;x<5;x++)
    {
        printf("%i\n",sueldos[x]);
    }
}


int main()
{
    int sueldos[5];
    cargar(sueldos);
    ordenar(sueldos);
    imprimir(sueldos);
    getch();
    return 0;
}
