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

/*
    Prueba:
    -- Ejecución 1:
    Ingrese un valor que se almacenará en la variable N 
    6
    El 6 número primo es: 13 
    -- Ejecución 2:
    Ingrese un valor que se almacenará en la variable N 
    4
    El 4 número primo es: 7 
    -- Ejecución 3:
    Ingrese un valor que se almacenará en la variable N 
    7
    El 7 número primo es: 17
    -- Ejecución 4:
    Ingrese un valor que se almacenará en la variable N 
    1
    El 1 número primo es: 2
    -- Ejecucion 5:
    Ingrese un valor que se almacenará en la variable N 
    0
    Error. El número debe ser positivo. 
    Ingrese un valor que se almacenará en la variable N 
    1
    El 1 número primo es: 2
    -- Ejecución 6:
    Ingrese un valor que se almacenará en la variable N 
    -3
    Error. El número debe ser positivo. 
    Ingrese un valor que se almacenará en la variable N 
    2
    El 2 número primo es: 3
*/