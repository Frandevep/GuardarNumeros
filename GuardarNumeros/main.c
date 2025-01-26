#include <stdio.h>
#include <stdlib.h>

struct datos {
    int numero;
};

int main() {

    struct datos d[3]; // arreglo de estructuras para almacenar 3 nimeros

    // cargar los numeros
    for (int i=0;i<3;i++) {
        printf("Ingrese el numero %d:", i+1);
        scanf("%d",&d[i].numero); // guardar cada numero en una posicion diferente del arreglo
    }

    // mostrar los numeros cargados
    printf("\nNumeros cargados:\n");
    for (int i=0;i<3;i++) {
        printf("%d\n", d[i].numero); // imprimir cada numero desde el arreglo de estructuras
    }

    return 0;
}
