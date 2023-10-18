#include <stdio.h>

struct div_t division(int x, int y)
{
    /* data */
};

struct div_t {
    int cociente;
    int resto;
};

int pedir_entero(char n) {
    int x;
    printf("Ingrese un valor que se almacenará en la variable %c \n", n);
    scanf("%d", &x);
    return x;
}

int main(void) {
    int x = pedir_entero('x');
    int y = pedir_entero('y');
    return 0;
}