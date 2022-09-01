#include <stdio.h>
#include <stdlib.h>


int main() {//Inicio main

    //Declración y asignacion de variable entera
    int numApuntador = 43;
    int *punt;

    punt = &numApuntador;//puntero pasa y asigna a direccion en memoria
    *punt = 30;//asignacion de numero valor para apuntador

    printf("\n Direccion de memoria para numero = %p \n valor de numero : %d \n", &numApuntador, numApuntador);
    printf("\n Autor: Jose de Jesus Zaragoza Rosales IIS 31/08/22\n");

getchar();
}



