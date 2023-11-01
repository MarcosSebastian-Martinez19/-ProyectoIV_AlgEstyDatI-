#include <stdio.h>

int pedir_entero(char n) {
    int x;
    printf("Ingrese un valor que se almacenará en la variable %c \n", n);
    scanf("%d", &x);
    return x;
}

int sumatoria(int tam, int a[]) {
    int suma_total = 0;
    int i = 0;
    while(i < tam) {
        suma_total = suma_total + a[i];
        i = i + 1;
    }
    return suma_total;
}

int main(void) {
    int x = pedir_entero('x');
    int array[x];
    int i = 0;
    while (i < x) {
        array[i] = pedir_entero('a');
        i = i + 1;
    }
    int suma = sumatoria(x, array);
    printf("La suma total de los elementos del array es: %d \n", suma);
    return 0;
}