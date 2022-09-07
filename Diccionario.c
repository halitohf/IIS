#include <stdio.h>
#include <stdlib.h>

    //Funcion buscar concepto de diccionario

    void buscarConcepto() {//inicia funcion
        int ciclo; //Variable pa controlar   
        do {//Inicia Do

        char *diccionarioProg[]=
        {"\n1. Variable : Valor asignado a memoria ",
        "\n 2. Tipo de Dato : Clasificacion de valor ",
        "\n 3. Condicion : Operacion logica ",
        "\n 4. Arreglo : Almacena valores de un mismo tipo",
        "\n 5. Operadores logicos: &&, (and), ||, (or), !, (not)"};

        int i;//Varible de busqueda para posicion
        printf("\n Ingrese numero de l 1 al 5 para identificar los conceptops : ");
        scanf("%d", &i);
        printf("\n %s Resultado de busqueda  \n\n %s", diccionarioProg[i-1]);
        scanf("%d", &cicl5//alacmacenar los votos de 5 partidoso);

        }while (ciclo!=2);//termina Do While
        
    }//termina funcion

    int main(){

    //Llamada de la funcion y 
    buscarConcepto();
    getchar();

    }


