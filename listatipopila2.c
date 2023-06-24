#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct nodo{
    char simbolo;
    struct nodo *sig;
};

struct nodo *raiz=NULL;

void insertar (char x){
    struct nodo *nuevo;
    nuevo->simbolo=x;
    if(raiz==NULL){
        raiz=nuevo;
        nuevo->sig=NULL;
    }else{
        nuevo->sig=raiz;
        raiz=nuevo;
    }
}
char extraer(){
    if(raiz !=NULL){
        char informacion=raiz->simbolo;
        struct nodo *bor =raiz;
        raiz = raiz->sig;
        free(bor);
        return informacion;
    }else{
        return -1;
    }
}
void cargar(char *formula){
    printf("Ingrese la formula: ");
    gets(formula);
}
int verificarBalance(char *formula){
    for(int f=0;f<strlen(formula);f++){
        if(formula[f]=='{' || formula[f]=='(' || formula[f]=='['){
            insertar(formula[f]);
        }else{
            if(formula[f]==')'){
                if(extraer()!='('){
                    return 0;
                   }
               }else{
                   if(formula[f]==']'){
                       if(extraer()!='['){
                          return 0;
                        }
                    }else{
                        if(formula[f]=='}'){
                            if(extraer()!='{'){
                                return 0;
                            }
                        }
                    }
               }
        }
    }
    if(vacia()){
        return 1;
    }else{
        return 0;
    }
}
int main(){
    char formula[101];
    cargar(formula);
    if(verificarBalance(formula)){
        printf("La formula esta balanceada");
    }else{
        printf("La formula no esta balanceada");
    }
    liberar();
    getch();
    return 0;
}
