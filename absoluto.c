#include <stdio.h>
#include <assert.h>

int pedir_entero(char n);
void imprimir_entero(char n, int x);
int valor_absoluto(int x);

int main(void) {
    int abs;
    int x = pedir_entero('x');
    abs = valor_absoluto(x);
    assert(abs>0 && abs >=x && (abs == x || abs == (-1)*x));
    imprimir_entero('x', abs);
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