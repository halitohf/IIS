#include <stdio.h>//liberia estandar de entrada y salida
#include <conio.h>//para gestion y manipulación
#include <string.h>//Libreria para cadena de caracteres string

//Declaracion de la estructura empleado
struct empleado{
    char nombre[30];
    int id_empleado;
    float salario;
    char telefono[20];
    int numero_oficina;
}trabajador;
//termina estructura

int main() {//inicio main
    //Almacenamiento de valores para la estructura
    strcpy(trabajador.nombre,"Jose de Jesus Zaragoza Rosales");//string copia a nombre trabajador
    trabajador.id_empleado=190030117;
    trabajador.salario=25000.00;
    strcpy(trabajador.telefono,"52-5550431289");//string copia a telefono
    trabajador.numero_oficina=309;
    //imprimir valores de la estructura
    
    printf("Nomina UACM\n Datos de Empleado \n\n");

    printf("Nombre del Empleado : %s \n",trabajador.nombre);
    printf("Id del Empleado : %d \n",trabajador.id_empleado);
    printf("Salario Empleado : %.2f \n",trabajador.salario);
    printf("Telefono : %s \n",trabajador.telefono);
    printf("Numero de officina : %d \n",trabajador.numero_oficina);
    getch();//pausa
}//fin main