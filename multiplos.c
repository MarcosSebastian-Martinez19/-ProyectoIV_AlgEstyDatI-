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

void imprimir_desicion(int x, int a[]) {
    if(x == 1) {
        printf("%s \n", (todos_pares(x, a)) ? "True" : "False");
    } else {
        int m = pedir_entero('m');
        printf("%s", (existe_multiplo(m, x, a)) ? "True" : "False");
    }
}

int main(void) {
    int desicion;
    int x =pedir_entero('x');
    int array[x];
    pedir_arreglo(x, array);
    printf("Elija que quiere ejecutar: 1. Todos Pares, 2. Existe Múltiplo \n");
    scanf("%d", &desicion);
    imprimir_desicion(desicion, array);
    return 0;
}

/*
    Prueba:
    -- Ejecución 1:
    Ingrese un valor que se almacenará en la variable x 
    5
    Ingrese un valor que se almacenará en la variable a 
    12
    Ingrese un valor que se almacenará en la variable a 
    44
    Ingrese un valor que se almacenará en la variable a 
    32
    Ingrese un valor que se almacenará en la variable a 
    86
    Ingrese un valor que se almacenará en la variable a 
    90
    Elija que quiere ejecutar: 1. Todos Pares, 2. Existe Múltiplo 
    1
    True
    -- Ejecución 2:
    Ingrese un valor que se almacenará en la variable x 
    5
    Ingrese un valor que se almacenará en la variable a 
    12
    Ingrese un valor que se almacenará en la variable a 
    3
    Ingrese un valor que se almacenará en la variable a 
    4
    Ingrese un valor que se almacenará en la variable a 
    54
    Ingrese un valor que se almacenará en la variable a 
    23
    Elija que quiere ejecutar: 1. Todos Pares, 2. Existe Múltiplo 
    2
    Ingrese un valor que se almacenará en la variable m 
    3
    True
*/