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

int menor(int x, int y) {
    int menor = (x<= y) ? x : y;
    return menor;
}

int minimo_pares(int tam, int a[]) {
    int i = 0;
    int minimo_par = 1000;
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
    int minimo_impar = 1000;
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
    printf("El mínimo número par del arreglo es: %d\n", minimo_par);
    printf("El mínimo número impar del arreglo es: %d\n", minimo_impar);
    return 0;
}