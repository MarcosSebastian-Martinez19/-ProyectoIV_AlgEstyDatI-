#include <stdio.h>
#include <assert.h>

int pedir_entero(char n) {
    int x;
    printf("Ingrese un valor que se almacenará en la variable %c \n", n);
    scanf("%d", &x);
    return x;
}

int main(void) {
    const int X = pedir_entero('X');
    const int Y = pedir_entero('Y');
    const int Z = pedir_entero('Z');
    int x = X;
    int y = Y;
    int z = Z;
    assert(x == X && y == Y && z == Z);
    x = Y;
    y = x + X + z;
    z = x + X;
    assert(x == Y && y == Y + X + Z && z == Y + X);
    printf("El valor de x es: %d, el valor de y es: %d, y el valor de z es: %d", x, y, z);
    return 0;
}