#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main()
{
    FILE *arch=fopen("datosNiwwdMaru.txt","wt");
    if (arch==NULL)
        exit(1);
    fputs("Primer linea\n",arch);
    fputs("Segunda linea\n",arch);
    fputs("Tercer linea\n",arch);
    fclose(arch);
    printf("Se creo el archivo de texto con tres lineas de texto.");
    getch();
    return 0;
}
