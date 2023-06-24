//Las listas de tipo pila (LIFO : Last First Out) son las que tienen la inserción y la extracción por un mismo lado de la lista.


#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct nodo {
    int info;
    struct nodo *sig;
};


struct nodo *raiz=NULL; //puntero de tipo nodo, si tiene null significa que la pila esta vacia


void insertar(int x){
    struct nodo *nuevo;// puntero de tipo nodo
    nuevo=malloc(sizeof(struct nodo)); // malloc asigna el espacio de memoria necesario en la variable;
    //el sizeof genera el almacenamiento de una exprecion
    nuevo->info=x;
    if(raiz ==NULL){
        raiz=nuevo;
        nuevo->sig=NULL;
    }else{
        nuevo->sig=raiz;
        raiz=nuevo;
    }
}

int extraer (){ // extraer es retornar la informacion del primer nodo y ademas borrarlo de la lista
    if(raiz!=NULL){
        int informacion=raiz->info;
        struct nodo *bor; //puntero de tipo nodo
        raiz = raiz->sig;
        free(bor);//libera el espacio
        return informacion;
    }else{
        return -1;
    }
}


void imprimir(){
    struct nodo *reco=raiz;
    printf("La lista completa es: \n");
    while(reco!=NULL){
        printf("%i ",reco->info);
        reco=reco->sig;
    }
    printf("\n");
}


void liberar (){
    struct nodo *reco=raiz;
    struct nodo *bor;
    while(reco!=NULL){
        bor=reco;
        reco=reco->sig;
        free(bor);
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


int main(){
    insertar(10);
    insertar(4);
    insertar(5);
    printf("\nCantidad de nodos: %i\n", cantidad());
    imprimir();
    printf("Extraemos de la pila: %i\n",extraer());
    printf("\nCantidad de nodos: %i\n", cantidad());

    imprimir();
    liberar();

    getch();
    return 0;
}

