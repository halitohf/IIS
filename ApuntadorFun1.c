//Jose de Jesus Zaragoza 1/Sep/22
#include <stdio.h>
#include <stdlib.h>

    //Declaracion de la funcion suma con apuntador 

    int suma (int *apuntador, int b) {//inicia funcion suma 
        int c;//variable asignada para resultado
        //operacion suma
        c=*apuntador + b;
        *apuntador = 0;//direccion de memoria inicializada en cero
        return c;//Variable de retorno resultado de la suma
    }//termina funcion suma

    int main() {//inicia main para compilar y ejecutar 
        //declaracion de dos variabes para operacion suma
        int var1, var2;
        printf("\n Calculadora Suma\n Jose de Jesus \n Captura un 1er Numero enter : \n ");
            scanf("%d", &var1);
        printf("\n Captura un 2do numero entero : \n");
            scanf("%d", &var2);
        //Para imprimir y llamar a la funcion suma()
        printf("\n ----------------------");
        printf("\n Salida de datos : \n\n La suma es: %d y el valor del apuntador es %d\n",suma(&var1,var2),var1);

        printf("\n ----------------------");
        printf("\nAutor : Jose de Jesus Zaragoza\n");

    getchar();

    }//termina main