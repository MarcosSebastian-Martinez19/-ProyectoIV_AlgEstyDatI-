#include <stdio.h>
struct div_t {
    int cociente;
    int resto;
};

struct div_t division(int x, int y)
{
    struct div_t resultado;
    resultado.cociente = x / y;
    resultado.resto = x % y;

    return resultado;
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

    if(y == 0) {
        printf("Error. El divisor no puede ser 0.");
    } else {
        struct div_t resultado = division(x, y);
        printf("Cociente: %d\n", resultado.cociente);
        printf("Resto: %d\n", resultado.resto);
        
    }

    return 0;
}

/*
    Prueba:

    Ingrese un valor que se almacenará en la variable x 
    10
    Ingrese un valor que se almacenará en la variable y 
    4
    Cociente: 2
    Resto: 2
*/