//Programa estructura 1 

#include <stdio.h>//libreria estandar de entrada y salida
#include <conio.h>//para gestion y manipulacion del programa

//declaracion de estructura
    struct info_libro{
        char titulo_lib[64];
        char autor[30];
        char editorial[30];
        int anio; //variable con tipo de datos entero regular
    }libro1={"Dukers Orquestador","Grossmann","Mac. Graw Hull",2020};

int main() {//inicia funcion principal main para compilar y ejecutar programa

    //para imprimir valores de la estructura
    printf("\n Biblioteca UACM\n Datos del Libro seleccionado\n\n");
    printf("----------------------------------------\n");
    printf("Titulo de libro : %s\n", libro1.titulo_lib);//imprime dato del titulo 
    printf("Autor del libro : %s\n", libro1.autor);//imprime dato del autor
    printf("Editorial del libro : %s\n", libro1.editorial);//imprime dato del editorial
    printf("Año del libro : %s\n",libro1.anio);//imprime anio del libro
    printf("---------------------------------------\n");
    printf("Autor: Jose de Jesus Zaragoza -- ISS --");

    getch();//pausa
}//termina funcion main
