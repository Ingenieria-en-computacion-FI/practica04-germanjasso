#include <stdio.h>
#include "nodo.h"

int main() {
    printf("===== Repo de ejercicios de nodos =====\n");

    Nodo* n1 = crearNodo(10);
    if (n1) printf("Nodo creado con dato: %d\n", n1->dato);

    Nodo* arreglo = crearArregloNodos(5);
    printf("Arreglo inicial (5 nodos): ");
    for(int i = 0; i < 5; i++) printf("[%d] ", arreglo[i].dato);
    printf("\n");

    int tam = 5;
    arreglo = agregarNodo(arreglo, &tam, 99);
    printf("Arreglo actualizado (tam %d): ", tam);
    for(int i = 0; i < tam; i++) printf("[%d] ", arreglo[i].dato);
    printf("\n");

    liberarNodos(arreglo, tam);
    liberarNodos(n1, 1);

    Nodo* inicio = construirTresNodos();
    printf("Lista de 3 nodos: ");
    Nodo* temp = inicio;
    while(temp != NULL) {
        printf("%d -> ", temp->dato);
        temp = temp->siguiente;
    }
    printf("NULL\n");

    int total = contarNodos(inicio);
    printf("Total de nodos: %d\n", total);

    Nodo* desdeEntrada = crearNodosPorEntrada();
    printf("Lista desde entrada: ");
    Nodo* temp2 = desdeEntrada;
    while(temp2 != NULL) {
        printf("%d -> ", temp2->dato);
        temp2 = temp2->siguiente;
    }
    printf("NULL\n");

    return 0;
}
