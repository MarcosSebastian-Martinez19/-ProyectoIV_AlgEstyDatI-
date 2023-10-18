#include <stdio.h>
#include <assert.h>

void hola_hasta(int n);
int pedir_entero(char n);

int main(void) {
    int n = pedir_entero('n');
    assert(n > 0);
    hola_hasta(n);
    return 0;
}

int pedir_entero(char n) {
    int x;
    printf("Ingrese un valor que se almacenará en la variable %c \n", n);
    scanf("%d", &x);
    return x;
}

void hola_hasta(int n) {
    int i = 0;
    while (i < n) {
        printf("Hola\n");
        i = i + 1;
    }
}