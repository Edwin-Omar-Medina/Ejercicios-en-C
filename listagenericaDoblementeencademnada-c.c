#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct nodo{
    int info;
    struct nodo *sig;
    struct nodo *ant;
};

struct nodo *raiz=NULL;

void liberar(){
    struct nodo *reco=raiz;
    struct nodo *bor;
    while (reco!=NULL){
        bor=reco;
        reco=reco->sig;
        free(bor);
    }
}


int vacia(){
    if(raiz==NULL){
        return 1;
    }else{
        return 0;
    }
}

int cantidad(){
    struct nodo *reco=raiz;
    int cant=0;
    while(reco!=NULL){
        cant++;
        reco=reco->sig;
    }
    return cant;
}


void imprimir(){
    struct nodo *reco=raiz;
    printf("Lista completa \n");
    while(reco!=NULL){
        printf(" %i ",reco->info);
        reco=reco->sig;
    }
    printf("\n");
}




