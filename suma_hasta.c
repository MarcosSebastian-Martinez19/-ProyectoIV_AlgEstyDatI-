#include <stdio.h>

int pedir_entero(char n);
int suma_hasta(int n);

int main(void) {
    int n = pedir_entero('n');
    int suma = suma_hasta(n);
    if (n < 0) {
        printf("Error, ingrese un número mayor o igual a 0.");
    } else {
        printf("La suma total es: %d", suma);
    }

    return 0;
}

int pedir_entero(char n) {
    int x;
    printf("Ingrese un valor que se almacenará en la variable %c \n", n);
    scanf("%d", &x);
    return x;
}

int suma_hasta(int n) {
    int i = 0;
    int suma_total;
    while (i < n)
    {
        suma_total = i + suma_total;
        i = i + 1;
    }
    return suma_total;
}

/*
    Prueba:
    Ingrese un valor que se almacenará en la variable n 
    6
    La suma total es: 15
*/