#include<stdio.h>
#include<stdlib.h>

main(){
    int valor = 10, *punt;
    punt = &valor;

    printf("\nEl contenido del puntero es: %d", *punt);
    printf("\nLa direccion de memoria almacenada por el puntero es %p", punt);
    printf("\nLa direccion de memoria de la variable es %p", &valor);
    printf("\nLa direccion de memoria del puntero es %p", &punt);
    printf("\nEl tamaño de memoria utilizado por la variable es %d", sizeof(valor));

}