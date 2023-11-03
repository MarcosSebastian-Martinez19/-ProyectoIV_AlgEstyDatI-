#include <stdio.h>
#include <stdbool.h>

typedef char clave_t;
typedef int valor_t;

struct asoc {
    clave_t clave;
    valor_t valor;
};

bool asoc_existe(int tam, struct asoc a[], clave_t c) {
    int i = 0;
    while (i < tam) {
        if(a[i].clave == c) {
            return true;
        }
        i = i + 1;
    }
    return false;
}

int pedir_entero(int i) {
    int x;
    printf("Ingrese el valor %d: \n", i);
    scanf("%d", &x);
    return x;
}

int pedir_letra(int i) {
    char x;
    printf("Ingrese la clave %d: \n", i);
    scanf(" %c", &x);
    return x;
}

void pedir_arreglo_asociaciones(int n_max, struct asoc a[]) {
    int i = 0;
    while (i < n_max) {
        a[i].clave = pedir_letra(i + 1);
        a[i].valor = pedir_entero(i + 1);
        i = i + 1;
    }
}

void verificar(int n, struct asoc a[], clave_t clave) {
    if(asoc_existe(n,a,clave)) {
        printf("La clave %c se encuentra en el arreglo de asociaciones. \n", clave);
    } else {
        printf("La clave %c no se encuentra en el arreglo de asociaciones. \n", clave);
    }
}

int main(void) {
    int x = 5;
    struct asoc a[x];

    pedir_arreglo_asociaciones(x, a);

    clave_t clave_buscada;
    printf("Ingrese la clave a buscar: \n");
    scanf(" %c", &clave_buscada);
    verificar(x, a, clave_buscada);
    return 0;
}

/*
    Prueba:
    Ingrese la clave 1: 
    a
    Ingrese el valor 1: 
    1
    Ingrese la clave 2: 
    b
    Ingrese el valor 2: 
    2
    Ingrese la clave 3: 
    c
    Ingrese el valor 3: 
    3
    Ingrese la clave 4: 
    d
    Ingrese el valor 4: 
    4
    Ingrese la clave 5: 
    e
    Ingrese el valor 5: 
    6
    Ingrese la clave a buscar: 
    b
    La clave b se encuentra en el arreglo de asociaciones.
*/