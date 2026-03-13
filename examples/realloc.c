#include <stdio.h>
#include <stdlib.h>

int main (){
    int *array, *array2;
    int num;

    printf("¿Cuantos elementos tiene el conjunto?\n");
    scanf("%d", &num);
    
    array = (int*) malloc (num * sizeof(int));

    if (array != NULL) {
        for (int i = 0; i < num; i++) {
            printf("Ingresa el valor %d: ", i + 1);
            scanf("%d", &array[i]);
        }

        printf("[ ");
        for (int i = 0; i < num; i++) {
            printf("%d ", array[i]);
        }
        printf("]\n");

        int nuevo_tam = num * 2;
        array2 = (int*) realloc (array, nuevo_tam * sizeof(int));

        if (array2 != NULL) {
            for (int i = num; i < nuevo_tam; i++) {
                printf("Ingresa el valor faltante %d: ", i + 1);
                scanf("%d", &array2[i]);
            }

            printf("[ ");
            for (int i = 0; i < nuevo_tam; i++) {
                printf("%d ", array2[i]);
            }
            printf("]\n");

            free(array2);
        } else {
            free(array);
        }
    }
    
    return 0;
}
