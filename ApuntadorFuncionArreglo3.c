//Ejercicio pendiente de la clase 5 Sep 2022
#include <stdio.h>
#include <stdlib.h>
//Arreglo de tipo global unidimensionales 
    int votos[5];//almacenar los votos de 5 partidos
    char *candi[5];//arreglo unidimencional para 5 nombres de partidos politicos
    int i, j;//contadores "i" para las filas y "j" para las columnas

int main() {//Inicia main
    //Asignación de valores en las posisiones de los arreglos.
    votos[0]=10;
    votos[1]=33;
    votos[2]=45;
    votos[3]=8;
    votos[4]=4;
    candi[0]="PRI";
    candi[1]="PAN";
    candi[2]="PRD";
    candi[3]="MORENA";
    candi[4]="Verde Ecologista";
    
    printf("****Resultados de Votacion.**** ");
    //imprimir resultados de votacion
    for(i=0;i<5;i++){//incia for
        printf("\n %s ",candi[i]);
                for(j=i;j<=votos[i];j++) printf("*");//imprime simulacion de grafica votos
                printf("%d %%\n",*(votos + i));
    }//termina for
printf("\n\n Autor: Jose de Jesus Zaragoza 7/09/2022");
getchar();
}//Termina main
