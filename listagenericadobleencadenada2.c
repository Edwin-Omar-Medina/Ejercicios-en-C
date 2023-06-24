#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct nodo{
    int info;
    struct nodo *sig;
    struct nodo *ant;
};

struct nodo *raiz=NULL;

void liberar (){
    struct nodo *reco=raiz;
    struct nodo *bor;
    while(reco!=NULL){
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
    while (reco!=NULL){
        cant++;
        reco=reco->sig;
    }
    return cant;
}

void imprimir(){
    struct nodo *reco=raiz;
    printf("Lista completa \n");
    while (reco!=NULL){
        printf(" %i ",reco->info);
        reco=reco->sig;
    }
    printf("\n");
}


//Insertar nodo al principio de la lista
void insertarPrimero(int x){
    struct nodo *nuevo;
    nuevo=malloc(sizeof(struct nodo));
    nuevo->info=x;
    nuevo->ant=NULL;
    nuevo->sig=raiz;
    if(raiz!=NULL){
        raiz->ant=nuevo;
    }
    raiz=nuevo;
}


//insertar de ultimo
void insertarUltimo(int x){
    struct nodo *nuevo;
    nuevo=malloc(sizeof(struct nodo));
    nuevo->info=x;
    nuevo->ant=NULL;
    nuevo->sig=NULL;
    if(vacia()){
        raiz=nuevo;
    }else{
        struct nodo *reco=raiz;
        while(reco->sig!=NULL){
            reco=reco->sig;
        }
        reco->sig=nuevo;
        nuevo->ant=reco;
    }
}

//insertar nodo en 2 posicion
void insertarSegundo(int x){
    if(raiz!=NULL){
        struct nodo *nuevo;
        nuevo=malloc(sizeof(struct nodo));
        nuevo->info=x;
        nuevo->ant=NULL;
        nuevo->sig=NULL;
        if(raiz->sig==NULL){
            raiz->sig=nuevo;
            nuevo->ant=raiz;
        }else{
            struct nodo *segundo=raiz->sig;
            nuevo->sig=segundo;
            nuevo->ant=raiz;
            raiz->sig=nuevo;
            segundo->ant=nuevo;
        }

    }
}

//insertar nodo antepenultima posicion
void insertarAntepenultimo(int x){
    if(raiz!=NULL){
        struct nodo *nuevo;
        nuevo=malloc(sizeof(struct nodo));
        nuevo->info=x;
        nuevo->ant=NULL;
        nuevo->sig=NULL;
        if(raiz->sig==NULL){
            nuevo->sig=raiz;
            raiz->ant=nuevo;
            raiz=nuevo;
        }else{
            struct nodo *reco=raiz;
            while(reco->sig!=NULL){
                reco=reco->sig;
            }
            struct nodo *anteultimo=reco->ant;
            anteultimo->sig=nuevo;
            nuevo->ant=anteultimo;
            nuevo->sig=reco;
            reco->ant=nuevo;
        }
    }
}


//borrrar el primer nodo
void borrarPrimero(){
    if(raiz!=NULL){
        struct nodo *bor=raiz->sig;
        raiz=raiz->sig;
        if(raiz!=NULL){
            raiz->ant=NULL;
        }
        free(bor);
    }
}

//borrar segundo
void borrarSegundo(){
     if(raiz!=NULL){
        if(raiz->sig!=NULL){
            struct nodo *bor=raiz->sig;
            struct nodo *tercero=raiz->sig;
            tercero = tercero->sig;
            raiz->sig=tercero;
            if(tercero!=NULL){
                tercero->ant=raiz;
            }
            free(bor);
        }
    }
}

//eliminar el ultimo
void borrarUltimo(){
    if(raiz!=NULL){
        if(raiz->sig==NULL){
            free(raiz);
            raiz=NULL;
        }else{
            struct nodo *reco=raiz;
            while(reco->sig != NULL){
                reco=reco->sig;
            }
            struct nodo *ante=reco->ant;
            ante->sig=NULL;
            free(reco);
        }
    }
}

//Borrar nodo con mayor informacion

void borrarMayor(){
    if(raiz!=NULL){
        struct nodo *reco=raiz;
        int may=raiz->info;
        while(reco!=NULL){
            if(reco->info>may){
                may=reco->info;
            }
            reco=reco->sig;
        }
        reco=raiz;
        struct nodo *bor;
        while(reco!=NULL){
            if(reco->info==may){
                if(reco==raiz){
                    bor=raiz;
                    raiz=raiz->sig;
                    if(raiz!=NULL){
                        raiz->ant=NULL;
                    }
                    free(bor);
                    return;
                }else{
                    if(reco->sig==NULL){
                        bor=reco;
                        reco=reco->ant;
                        reco->sig=NULL;
                        free(bor);
                        return;
                    }else{
                        struct nodo *ante=reco->ant;
                        bor=reco;
                        reco=reco->sig;
                        ante->sig=reco;
                        reco->ant=ante;
                        free(bor);
                        return;

                    }
                }
            }else{
                reco=reco->sig;
            }
        }
    }
}


int main(){
    insertarPrimero(20);
    insertarPrimero(10);
    insertarPrimero(5);
    insertarPrimero(70);
    insertarPrimero(1);
    imprimir();
    printf("\n");
    insertarUltimo(400);
    imprimir();
    printf("\n");
    insertarSegundo(9);
    imprimir();
    printf("\n");
    insertarAntepenultimo(1000);
    imprimir();
    printf("\n");
    borrarUltimo();
    imprimir();
    printf("\n");
    borrarMayor();
    imprimir();
    liberar();
    getch();
    return 0;

}
