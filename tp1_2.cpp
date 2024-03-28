#include<stdio.h>
#include<stdlib.h>

int cuadrado(int a){
    return a*a;
}

void cuadrado_void(int a){
    int cuadrado = a*a;
    printf("\nCuadrado de %d: %d", a, cuadrado);
}

void mostrar(int *punt){
    printf("\nDireccion en memoria: %p", punt);
    printf("\nContenido de la variable: %d", *punt); 
}

void invertir(int *a, int *b){
    int aux = *a; 
    *a = *b;
    *b = aux;
}

void orden(int *a, int *b){
    if(*a > *b){
        invertir(a, b);
    } else {
        return;
    }
}

main(){
    int num1 = 10, num2 = 20;

    printf("El cuadrado de 10 es %d", cuadrado(num1));
    cuadrado_void(num1);

    invertir(&num1, &num2);
    orden(&num1, &num2);

}