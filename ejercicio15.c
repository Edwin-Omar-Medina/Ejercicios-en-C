#include<stdio.h>
#include<conio.h>
#include<string.h>


int main()
{
    char usuario[31];
    char pass[31];
    char passcorrecta[31];
    printf("Ingrese el usuario: ");
    gets(usuario);
    printf("Ingrese la contraseņa: ");
    gets(pass);
    if(strcmp(pass, "abc123")==0){
        printf("La contraseņa es correcta");
    }else{
        printf("Clave incorrecta");
    }

    getch();
    return 0;
}
