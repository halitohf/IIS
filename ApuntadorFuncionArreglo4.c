#include <stdio.h>//Libreria de entradas y salidas
#include <stdlib.h>//Libreria Estandar de C
#include <string.h>//Cadena de caracteres string
#include <ctype.h>//Caracteres en tratamiento Por ejemplo mayusculas y minusculas pro teclado

int main() {//Inicia main
    //Declaracion de arreglo diccionario bidimencional tipo char "string"
    char *dic[][40]={"Proposicion","Conjunto  de enunciados logicos","Funcion","Asignacion de valores en ecuaciones","Operador","Realiza calculos y operaciones","Logica","Paradigmas y Resultados Verdaderos y falsos","Ecuacion","Realcion de constantes y variables de primer orden"};
    char word[80],ch;//arreglo unidimencional para palabra a buscar y variable ch para opcion a repetir 
    //Asignacion doble 
    char **p;//Apuntador de doble asignación para palabra a buscar y definicion

    do{//Inicia Do
    system("clear");
    printf("\nBienvenido a diccionario matematicas\n");
    printf("\nEscribe una palabra a buscar\n");
    scanf("%s",&word);
    //Mecanismo de busqueda mediante doble apuntador
    p=(char **)dic;
    do{//Inicia do
        if (!strcmp(*p,word)){ //Inicia If
            printf("Significado o concepto es : \n\n");
            printf((*(p+1)));break;
        }// Termina If
            if(!strcmp(*p,word));break;
            p=p+2;//asignacion de palabra 2 a buscar
    }while(*p);//Termina While
        if(!*p){//Inicia If
            printf("\nNo se encontro la palabra o no se encuentra en el diccionario ");
        }//Termina If

    printf("\n\n Desea buscar otra palabra (y/n): ");
    scanf("%s",&ch);//Guarda la opcion por si se requiere realizar otra busqueda.
    } while (toupper(ch)!='N');//Termina do-while toupper para letra mayuscula o minuscula.

getchar();
}//Termina main