#include <stdio.h>
#include <assert.h>

int pedir_entero(char n);
void imprimir_entero(char n, int x);
int valor_absoluto(int x);

int main(void) {
    int absoluto;
    int x = pedir_entero('x');
    absoluto = valor_absoluto(x);
    assert(absoluto > 0 && absoluto >= x && (absoluto == x || absoluto == (-1) * x));
    imprimir_entero('x', absoluto);
    return 0;
}

int pedir_entero(char n) {
    int x;
    printf("Ingrese un valor que se almacenará en la variable %c \n", n);
    scanf("%d", &x);
    return x;
}

void imprimir_entero(char n, int x) {
    printf("El valor absoluto de %c es: %d \n", n, x);
}

int valor_absoluto(int x) {
    int z;
    z = (x>=0) ? x : (-1 * x);
    return z;
}

/*
    Prueba:
    -- Ejecución 1:
    Ingrese un valor que se almacenará en la variable x 
    -90 
    El valor absoluto de x es: 90
    -- Ejecución 2:
    Ingrese un valor que se almacenará en la variable x 
    56
    El valor absoluto de x es: 56 
*/