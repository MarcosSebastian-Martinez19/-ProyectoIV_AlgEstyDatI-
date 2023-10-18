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

bool todos_pares(int tam, int a[]) {
    bool todos_pares = true;
    int i = 0;
    while(i < tam) {
        todos_pares = todos_pares && (a[i] % 2 == 0);
        i = i + 1;
    }
    return todos_pares;
}

bool existe_multiplo(int m, int tam, int a[]) {
    int i = 0;
    bool multiplo = false;
    while (i < tam) {
        multiplo = multiplo || (a[i] % m == 0);
        i = i + 1;
    }
    return multiplo;
}

int main(void) {
    int desicion;
    int m;
    int x =pedir_entero('x');
    int array[x];
    pedir_arreglo(x, array);
    printf("Elija que quiere ejecutar: 1. Todos Pares, 2. Existe Múltiplo \n");
    scanf("%d", &desicion);
    if(desicion == 1) {
        printf("%d \n", todos_pares(x, array));
    } else {
        m = pedir_entero('m');
        printf("%d", existe_multiplo(m, x, array));
    }
    return 0;
}