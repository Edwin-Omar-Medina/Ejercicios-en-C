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
    while (reco != NULL ){
        bor = reco;
        reco=reco->sig;
        free(bor);
    }
}



int vacia(){
    if(raiz == NULL){
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
    printf("La lista completa \n");
    while(reco!=NULL){
        printf("%i ",reco->info);
        reco=reco->sig;
    }
    printf("\n");
}

void imprimirinverso(){
    if(raiz!=NULL){
        struct nodo *reco=raiz;
        while(reco->sig!=NULL){
            reco=reco->sig;
        }
        printf("La lista completa Inversa \n");
        while(reco!=NULL){
            printf("%i ",reco->info);
            reco=reco->ant;
        }
        printf("\n");
    }

}

void insertar(int pos, int x){
    if(pos<=cantidad()+1){
        struct nodo *nuevo;
        nuevo=malloc(sizeof(struct nodo));
        nuevo->info=x;
        nuevo->ant=NULL;
        nuevo->sig=NULL;
        if(pos==1){
            nuevo->sig=raiz;
            if(raiz!=NULL){
                raiz->ant=nuevo;
            }
            raiz=nuevo;
        }else{
            if(pos==cantidad()+1){
                struct nodo *reco=raiz;
                while(reco->sig!=NULL){
                    reco=reco->sig;
                }
                reco->sig=nuevo;
                nuevo->ant=reco;
            }else{
                struct nodo *reco=raiz;
                for(int f=1;f<pos-2;f++){
                    reco=reco->sig;
                }
                struct nodo *siguiente=reco->sig;
                reco->sig=nuevo;
                nuevo->ant=reco;
                nuevo->sig=siguiente;
                siguiente->ant=nuevo;
            }
        }
    }
}

int extraer(int pos){
    if(pos<=cantidad()){
        int informacion;
        struct nodo *bor;
        if(pos==1){
            informacion=raiz->info;
            bor=raiz;
            raiz=raiz->sig;
            if(raiz!=NULL){
                raiz->ant=NULL;
            }
        }else{
            struct nodo *reco=raiz;
            for(int f=1; f<pos-2;f++){
                reco=reco->sig;
            }
            struct nodo *prox=reco->sig;
            bor=prox;
            reco->sig=prox->sig;
            struct nodo *siguiente=prox->sig;
            if(siguiente!=NULL){
                siguiente->ant=reco;
            }
            informacion=prox->info;
        }
        free(bor);
        return informacion;
    }else{
        return -1;
    }
}

int main(){
    insertar(1,10);
    insertar(2,20);
    insertar(3,20);
    insertar(4,20);
    insertar(5,20);
    insertar(6,12);
    imprimir();
    imprimirinverso();
    printf("Extraemos de la lista: %i\n",extraer(3));
    imprimir();
    liberar();
    getch();
    return 0;
}
