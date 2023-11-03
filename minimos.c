#include <stdio.h>
#include <limits.h>

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

int menor(int x, int y) {
    int menor = (x <= y) ? x : y;
    return menor;
}

int minimo_pares(int tam, int a[]) {
    int i = 0;
    int minimo_par = INT_MAX;
    while(i < tam) {
        if(menor(minimo_par, a[i]) % 2 == 0) {
            minimo_par = menor(minimo_par, a[i]);
        }
        i = i + 1;
    }
    return minimo_par;
}

int minimo_impares(int tam, int a[]) {
    int i = 0;
    int minimo_impar = INT_MAX;
    while(i < tam) {
        if(menor(minimo_impar, a[i]) % 2 != 0) {
            minimo_impar = menor(minimo_impar, a[i]);
        }
        i = i + 1;
    }
    return minimo_impar;
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
    int minimo_par = minimo_pares(x, arreglo);
    int minimo_impar = minimo_impares(x, arreglo);
    int minimo_elemento = menor(minimo_impar, minimo_par);
    printf("El mínimo número par del arreglo es: %d\n", minimo_par);
    printf("El mínimo número impar del arreglo es: %d\n", minimo_impar);
    printf("El elemento minimo del arreglo es: %d \n", minimo_elemento);

    return 0;
}

/*
    Prueba:
    Ingrese un valor que se almacenará en la variable x 
    5
    Ingrese un valor que se almacenará en la variable a 
    23
    Ingrese un valor que se almacenará en la variable a 
    12
    Ingrese un valor que se almacenará en la variable a 
    45
    Ingrese un valor que se almacenará en la variable a 
    3
    Ingrese un valor que se almacenará en la variable a 
    4
    El arreglo es: [ 23 12 45 3 4 ]
    El mínimo número par del arreglo es: 4
    El mínimo número impar del arreglo es: 3
    El elemento minimo del arreglo es: 3
*/