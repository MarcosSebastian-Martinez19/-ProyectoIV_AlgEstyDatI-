#include <stdio.h>
#include <stdbool.h>

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

int prim_iguales(int tam, int a[]) {
    int i = 0;
    int tramo = 0;
    int primer_elemento = a[0];
    bool b=true;
    while(i < tam && b) {
        if(a[i] == primer_elemento) {
            tramo = tramo + 1;
        } else {
            b=false;
        }
        i = i + 1;
    }
    return tramo;
}

// Punto b. Mostrar por pantalla el mayor tramo inicial del arreglo a[] que tiene a todos sus elementos iguales.

int main(void) {
    int x = pedir_entero('x');
    int a[x];
    pedir_arreglo(x, a);
    int tramo = prim_iguales(x, a);
    printf("La cantidad de primeros elementos iguales es: %d\n", tramo);
    // Punto b.
    imprimir_arreglo(tramo, a);
    return 0;
}

/*
    Prueba:
    Ingrese un valor que se almacenará en la variable x 
    5
    Ingrese un valor que se almacenará en la variable a 
    23
    Ingrese un valor que se almacenará en la variable a 
    23
    Ingrese un valor que se almacenará en la variable a 
    4
    Ingrese un valor que se almacenará en la variable a 
    32
    Ingrese un valor que se almacenará en la variable a 
    1
    La cantidad de primeros elementos iguales es: 2
    El arreglo es: [ 23 23 ]
*/