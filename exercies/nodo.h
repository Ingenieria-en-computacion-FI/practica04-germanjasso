#ifndef __NODO_H__
#define __NODO_H__

#include <stdbool.h>

typedef struct Nodo {
    int dato;
    struct Nodo* siguiente;
} Nodo;

Nodo* crearNodo(int valor);

Nodo* crearArregloNodos(int n);

Nodo* agregarNodo(Nodo* arreglo, int* n, int valor);

void liberarNodos(Nodo* arreglo, int n);

Nodo* construirTresNodos();

int contarNodos(Nodo* inicio);

Nodo* crearNodosPorEntrada();

#endif