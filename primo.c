#include <stdio.h>
#include <stdbool.h>

bool es_primo(int N) {
    int i = 2;
    while(N % i != 0 && N > 1) {
        i = i + 1;
    }
    return (i == N);
}

int nesimo_primo(int N) {
    int i = 1;
    int contador =  0;
    while (contador != N)
    {
        i = i + 1;
        if(es_primo(i)) {
            contador = contador + 1;
        }
    }
    return i;
}

int pedir_entero(char n) {
    int x;
    printf("Ingrese un valor que se almacenará en la variable %c \n", n);
    scanf("%d", &x);
    return x;
}

int main(void) {
    int N = pedir_entero('N');
    while(N <= 0) {
        printf("Error. El número debe ser positivo. \n");
        N = pedir_entero('N');
    }
    printf("El %d número primo es: %d", N, nesimo_primo(N));

    return 0;
}