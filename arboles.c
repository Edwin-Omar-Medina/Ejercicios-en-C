#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct nodo{
    int info;
    struct nodo *izq, *der;
};


struct nodo *raiz=NULL;

void insertar(int x){
    struct nodo *nuevo;
    nuevo=malloc(sizeof(struct nodo));
    nuevo->info=x;
    nuevo->izq=NULL;
    nuevo->der=NULL;
    if(raiz==NULL){
        raiz=nuevo;
    }else{
        struct nodo *anterior, *reco;
        reco=raiz;
        while(reco!=NULL){
            anterior=reco;
            if(x<reco->info){
                reco=reco->izq;
            }else{
                reco=reco->der;
            }
        }
        if(x<anterior->info){
            anterior->izq=nuevo;
        }else{
            anterior->der=nuevo;
        }
    }
}
void imprimirPre(struct nodo *reco){
    if(reco!=NULL){
        printf("%i ",reco->info);
        imprimirPre(reco->izq);
        imprimirPre(reco->der);
    }
}

void imprimirEntre(struct nodo *reco){
    if(reco!=NULL){
        imprimirEntre(reco->izq);
        printf("%i ",reco->info);
        imprimirEntre(reco->der);
    }
}

void imprimirPos(struct nodo *reco){
    if(reco!=NULL){
        imprimirPos(reco->izq);
        imprimirPos(reco->der);
        printf("%i ",reco->info);

    }
}

void borrar(struct nodo *reco ){
    if(reco!=NULL){
        borrar(reco->izq);
        borrar(reco->der);
        free(reco);
    }
}

int main(){
    int l=12;
    print(l);
    getch();
    return 0;
}
