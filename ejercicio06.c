#include <stdio.h>

int pedir_entero(char n) {
    int x;
    printf("Ingrese un valor que se almacenará en la variable %c \n", n);
    scanf("%d", &x);
    return x;
}

void pedir_arreglo(int n_max, int a[]) {
    int i = 0;
    while (i < n_max) {
        a[i] = pedir_entero('a');
        i = i + 1;
    }
}

void imprimir_arreglo(int n_max, int a[]) {
    int i = 0;
    printf("El arreglo es: [ ");
    while (i < n_max) {
        printf("%d ", a[i]);
        i = i + 1;
    }
    printf("]");
}

int main(void) {
    int x = pedir_entero('x');
    int arreglo[x];
    pedir_arreglo(x, arreglo);
    imprimir_arreglo(x, arreglo);

    return 0;
}