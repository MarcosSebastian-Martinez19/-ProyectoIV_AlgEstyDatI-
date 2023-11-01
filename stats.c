#include <stdio.h>
#include <limits.h>

float menor(float x, float y) {
    float menor = (x < y) ? x : y;
    return menor;
}

float mayor(float x, float y) {
    float mayor = (x > y) ? x : y;
    return mayor;
}

struct datos_t {
    float maximo;
    float minimo;
    float promedio;
};

struct datos_t stats(int tam, float a[])
{
    struct datos_t estadistica;
    estadistica.maximo = INT_MIN;
    estadistica.minimo = INT_MAX;
    estadistica.promedio = 0;
    float suma_total = 0;
    int i = 0;
    while(i < tam) {
        estadistica.maximo = mayor(estadistica.maximo, a[i]);
        estadistica.minimo = menor(estadistica.minimo, a[i]);
        suma_total = suma_total + a[i];
        i = i + 1;
    }
    estadistica.promedio = suma_total / tam;
    return estadistica;
};

float pedir_entero(char n) {
    float x;
    printf("Ingrese un valor que se almacenará en la variable %c \n", n);
    scanf("%f", &x);
    return x;
}

void pedir_arreglo(int n_max, float a[]) {
    int i = 0;
    while (i < n_max) {
        a[i] = pedir_entero('a');
        i = i + 1;
    }
}

int main(void) {
    float a[5];
    pedir_arreglo(5, a);
    struct datos_t x = stats(5, a);
    printf("minimo: %f maximo: %f promedio: %f", x.minimo, x.maximo, x.promedio);
    return 0;
}