#include <stdlib.h>
#include "nodo.h"

Nodo* nodo_crear(int dato)
{
    Nodo *n = (Nodo*)malloc(sizeof(Nodo));
    if( n != NULL){
        n->dato = dato;
        n->siguiente = NULL;
    }
 return newNode;
}

void nodo_destruir(Nodo* nodo)
{
    if(n->siguiente){
    free(newNode);
    }
}
