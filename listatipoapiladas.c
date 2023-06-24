
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct nodo{
    int info;
    struct nodo *sig;
};

struct nodo *raiz=NULL;


void insertar (int x){
    struct nodo *nuevo;
    nuevo= malloc(sizeof(struct nodo));
    nuevo->info=x;
    if(raiz==NULL){
        raiz=nuevo;
        nuevo->sig=NULL;
    }else{
        nuevo->sig=raiz;
        raiz=nuevo;
    }
}

int extraer(){
    if(raiz!=NULL){
        int informacion=raiz->info;
        struct nodo *bor=raiz;
        raiz=raiz->sig;
        free(bor);
        return informacion;
    }else{
        return -1;
    }
}

void imprimir(){
    struct nodo *reco=raiz;
    printf("La lista completa \n");
    while(reco!=NULL){
            printf("%i ",reco->info);
            reco=reco->sig;
    }
    printf("\n");
}

int main(){
    insertar(10);
    insertar(40);
    insertar(30);
    imprimir();
    printf("Extraemos de la pila: %i\n",extraer());
    imprimir();
    getch();
    return 0;
}
