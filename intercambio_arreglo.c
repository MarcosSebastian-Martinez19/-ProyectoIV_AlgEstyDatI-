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

void intercambiar(int tam, int a[], int i, int j) {
    if(i >= 0 && i < tam && j >= 0 && j < tam) {
        int temp = a[i];
        a[i] = a[j];
        a[j] = temp;
    } else {
        printf("Error, los indices no se encuentran en el rango. \n");
    }
}

void imprimir_arreglo(int n_max, int a[]) {
    int i = 0;
    printf("El arreglo es: [ ");
    while (i < n_max) {
        printf("%d ", a[i]);
        i = i + 1;
    }
    printf("]\n");
}

int main(void) {
    int x = pedir_entero('x');
    int arreglo[x];
    pedir_arreglo(x, arreglo);
    imprimir_arreglo(x, arreglo);
    int i = pedir_entero('i');
    int j = pedir_entero('j');
    intercambiar(x, arreglo, i, j);
    imprimir_arreglo(x, arreglo);
    return 0;
}

/*
    Prueba:
    Ingrese un valor que se almacenará en la variable x 
    4
    Ingrese un valor que se almacenará en la variable a 
    12
    Ingrese un valor que se almacenará en la variable a 
    34
    Ingrese un valor que se almacenará en la variable a 
    53
    Ingrese un valor que se almacenará en la variable a 
    1
    El arreglo es: [ 12 34 53 1 ]
    Ingrese un valor que se almacenará en la variable i 
    1
    Ingrese un valor que se almacenará en la variable j 
    3
    El arreglo es: [ 12 1 53 34 ]
*/