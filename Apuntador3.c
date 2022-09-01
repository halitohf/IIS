#include <stdio.h>
#include <stdlib.h>

int main() {
    //Declaracion de variables enteras y apuntadores
    int a,b;
    int * punt1, *punt2;

    //Asignación de valores a las variables
    a = 1001;
    b = 1001;

    punt1 = &a; punt2 = &b;

    if(*punt1 == *punt2) {//Inicia if para condicion verdadera
    printf("\n El valor de las variables a y b son IGUALES");
    }else{
        printf("El valor de las variables a y b son DIFERENTES !!");
    }

    printf("\n Autor: Jose de Jesus Zaragoza Rosales IIS 31/08/22\n");

 getchar();   
}
