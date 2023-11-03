#include <stdio.h>

struct comp_t {
    int menores;
    int iguales;
    int mayores;
};

struct comp_t cuantos(int tam, int a[], int elem) {
    struct comp_t variable;
    int menores = 0;
    int iguales = 0;
    int mayores = 0;
    int i = 0;
    while(i < tam) {
        if(a[i] > elem) {
            mayores = mayores + 1;
        } else if (a[i] < elem) {
            menores = menores + 1;
        } else {
            iguales = iguales + 1;
        }
        i = i + 1;
    }
    variable.iguales = iguales;
    variable.menores = menores;
    variable.mayores = mayores;
    return variable;
};

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

int main(void) {
    int a[5];
    pedir_arreglo(5, a);
    struct comp_t x = cuantos(5, a, 4);
    printf("menores que 4: %d mayores que 4: %d iguales que 4: %d", x.menores, x.mayores, x.iguales);
    return 0;
}

/*
    Prueba:
    Ingrese un valor que se almacenará en la variable a 
    2
    Ingrese un valor que se almacenará en la variable a 
    4
    Ingrese un valor que se almacenará en la variable a 
    3
    Ingrese un valor que se almacenará en la variable a 
    56
    Ingrese un valor que se almacenará en la variable a 
    23
    menores que 4: 2 mayores que 4: 2 iguales que 4: 1
*/