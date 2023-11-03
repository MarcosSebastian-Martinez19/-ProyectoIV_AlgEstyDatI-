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
    int x = X;
    int y = Y;
    assert(x==X && y == Y);
    x = x + 1;
    y = X + y;
    assert(x == X + 1 && y == X + Y);
    printf("El valor de x es: %d, y el valor de y es: %d", x, y);
    return 0;
}

/*
    Prueba:
    Ingrese un valor que se almacenará en la variable X 
    2
    Ingrese un valor que se almacenará en la variable Y 
    5
    El valor de x es: 3, y el valor de y es: 7
*/