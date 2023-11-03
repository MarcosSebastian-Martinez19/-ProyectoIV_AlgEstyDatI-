#include <stdio.h>
#include <assert.h>

int pedir_entero(char n);
int calcular_minimo(int x, int y);

int main(void) {
    int minimo;
    int x = pedir_entero('x');
    int y = pedir_entero('y');
    minimo = calcular_minimo(x, y);
    assert(minimo <= x && minimo <= y && (minimo ==x || minimo == y));
    printf("El valor minimo entre %c e %c es: %d", 'x', 'y', minimo);
    return 0;
}

int pedir_entero(char n) {
    int x;
    printf("Ingrese un valor que se almacenará en la variable %c \n", n);
    scanf("%d", &x);
    return x;
}

int calcular_minimo(int x, int y) {
    int minimo = (x < y) ? x : y;
    assert(minimo <= x);
    assert(minimo <= y);
    return minimo;
}

/*
    Prueba:
    Ingrese un valor que se almacenará en la variable x 
    5
    Ingrese un valor que se almacenará en la variable y 
    15
    El valor minimo entre x e y es: 5
*/