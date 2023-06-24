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
    if(raiz!=NULL){
        struct nodo *reco=raiz->sig;
        struct nodo *bor;
        while(reco!=raiz){
            bor=reco;
            reco=reco->sig;
            free(bor);
        }
    }free(raiz);
}

int vacia(){
    if(raiz==NULL){
        return 1;
    }else{
        return 0;
    }
}

void insertarPrimero(int x){
    struct nodo *nuevo;
    nuevo=malloc(sizeof(struct nodo));
    nuevo->info=x;
    if(vacia()){
        nuevo->sig=nuevo;
        nuevo->ant=nuevo;
        raiz=nuevo;
    }else{
        struct nodo *ultimo=raiz->ant;
        nuevo->sig=raiz;
        nuevo->ant=ultimo;
        ultimo->sig=nuevo;
        raiz->ant=nuevo;
        raiz=nuevo;
    }
}

void imprimir(){
    if(!vacia()){
        struct nodo *reco=raiz;
        do{
            printf("%i ",reco->info);
            reco=reco->sig;
        }while(reco!=raiz);
        printf("\n");
    }
}
void insertarUltimo(int x){
    struct nodo *nuevo;
    nuevo=malloc(sizeof(struct nodo));
    nuevo->info=x;
    if(vacia()){
        nuevo->sig=nuevo;
        nuevo->ant=nuevo;
        raiz=nuevo;
    }else{
        struct nodo *ultimo=raiz->ant;
        nuevo->sig=raiz;
        nuevo->ant=ultimo;
        ultimo->sig=nuevo;
        raiz->ant=nuevo;
    }
}

int cantidad(){
    int cant=0;
    if(!vacia()){
        struct nodo *reco=raiz;
        do{
            cant++;
            reco=reco->sig;
        }while(reco!=raiz);
    }
    return cant;
}

void borrar(int pos){
    if(pos<=cantidad()){
        if(pos ==1){
            if(cantidad()==1){
                free(raiz);
                raiz=NULL;
            }else{
                struct nodo *bor=raiz;
                struct nodo *ultimo= raiz->ant;
                raiz=raiz->sig;
                ultimo->sig=raiz;
                raiz->ant=ultimo;
                free(bor);
            }
        }else{
            struct nodo *reco=raiz;
            for(int f;f<=pos-1;f++){
                reco=reco->sig;
            }
            struct nodo *bor=reco;
            struct nodo *anterior=reco->ant;
            reco=reco->sig;
            anterior->sig=reco;
            reco->ant=anterior;
            free(bor);
        }

    }
}


int main(){
    insertarPrimero(100);
    insertarPrimero(30);
    insertarPrimero(27);
    insertarPrimero(10);
    imprimir();
    insertarUltimo(1000);
    imprimir();
    liberar();
    getch();
    return 0;
}
