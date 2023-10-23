#include <stdio.h>
#include <assert.h>

int pedir_entero(char n);
void imprimir_entero(char n, int x);
int intercambio(int x, int y);

int main(void) {
    int x, y, z;
    x = pedir_entero('x');
    y = pedir_entero('y');
    z = x;
    x = y;
    y = z;
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

int intercambio(int x, int y) {
    return x = y;
}