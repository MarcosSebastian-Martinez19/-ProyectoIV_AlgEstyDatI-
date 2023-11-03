#include <stdio.h>
#include <assert.h>

int pedir_entero(char n);
void imprimir_entero(char n, int x);

int main(void) {
    int x = pedir_entero('x');
    int y = pedir_entero('y');
    assert(x != y);
    int xAux = x;
    x = y;
    y = xAux;
    assert(x != y);
    imprimir_entero('x', x);
    imprimir_entero('y', y);
    return 0;
}

int pedir_entero(char n) {
    int x;
    printf("Ingrese un valor que se almacenará en la variable %c \n", n);
    scanf("%d", &x);
    return x;
}

void imprimir_entero(char n, int x) {
    printf("El valor del número almacenado en %c es: %d \n", n, x);
}

/*
    Prueba:
    Ingrese un valor que se almacenará en la variable x 
    3
    Ingrese un valor que se almacenará en la variable y 
    7
    El valor del número almacenado en x es: 7 
    El valor del número almacenado en y es: 3
*/