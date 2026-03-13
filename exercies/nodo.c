#include "nodo.h"
#include <stdio.h>
#include <stdlib.h>

Nodo* crearNodo(int valor){
    Nodo* nuevo = (Nodo*)malloc(sizeof(Nodo));
    if (nuevo != NULL) {
        nuevo->dato = valor;
        nuevo->siguiente = NULL;
    }
    return nuevo;
}

Nodo* crearArregloNodos(int n){
    Nodo* array = (Nodo*)calloc(n, sizeof(Nodo));
    return array;
}

Nodo* agregarNodo(Nodo* array, int* n, int valor){
    int nueva_cantidad = (*n) + 1;
    Nodo* t = (Nodo*)realloc(array, nueva_cantidad * sizeof(Nodo));
    
    if (t != NULL) {
        t[*n].dato = valor;
        t[*n].siguiente = NULL;
        *n = nueva_cantidad;
        return t;
    }
    return array;
}

void liberarNodos(Nodo* array, int n){
    if (array != NULL) {
        free(array);
    }
}

Nodo* construirTresNodos(){
    Nodo* n1 = crearNodo(10);
    Nodo* n2 = crearNodo(20);
    Nodo* n3 = crearNodo(30);

    if (n1 != NULL) n1->siguiente = n2;
    if (n2 != NULL) n2->siguiente = n3;
    
    return n1;
}

int contarNodos(Nodo* inicio){
    int cont = 0;
    Nodo* actual = inicio;
    while (actual != NULL) {
        cont++;
        actual = actual->siguiente;
    }
    return cont;
}

Nodo* crearNodosPorEntrada(){
    int cantidad, valor;
    Nodo *cabeza = NULL, *actual = NULL;

    printf("¿Cuantos nodos quieres crear? ");
    if (scanf("%d", &cantidad) != 1) return NULL;

    for (int i = 0; i < cantidad; i++) {
        printf("Valor para el nodo %d: ", i + 1);
        scanf("%d", &valor);
        
        Nodo* nuevo = crearNodo(valor);
        if (nuevo != NULL) {
            if (cabeza == NULL) {
                cabeza = nuevo;
                actual = cabeza;
            } else {
                actual->siguiente = nuevo;
                actual = nuevo;
            }
        }
    }      
    return cabeza;
}