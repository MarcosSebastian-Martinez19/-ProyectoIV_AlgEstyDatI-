#include <stdio.h>
#include <stdbool.h>

int pedir_vocal(char n);
bool es_vocal(char letra);

int main(void) {
    char n = pedir_vocal('n');
    es_vocal(n);

    return 0;
}

bool es_vocal(char letra) {
    bool vocal;
    if(letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u' || letra == 'A' || letra == 'E' || letra == 'I' || letra == 'O' || letra == 'U') {
        vocal = true;
    } else {
        vocal = false;
    }
    if(vocal == true) {
        printf("La letra ingresada es vocal.");
    } else {
        printf("La letra ingresada no es vocal.");
    }
    return vocal;
}

int pedir_vocal(char n) {
    char x;
    printf("Ingrese un valor que se almacenará en la variable %c \n", n);
    scanf("%c", &x);
    return x;
}

/*
    Prueba:
    -- Ejecución 1:
    Ingrese un valor que se almacenará en la variable n 
    t
    La letra ingresada no es vocal.
    -- Ejecución 2:
    Ingrese un valor que se almacenará en la variable n 
    a
    La letra ingresada es vocal.
*/