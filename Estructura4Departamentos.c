#include <stdio.h>
#include <conio.h>


    //declaracion de estructura
    struct departamentos{
        char codigo[10];
        char nombre[20];
        //dep = departamento
    }dep1={"ING","Ingenierias"},dep2={"NUT","Nutricion"},dep3={"TEL","Telecomunicaciones"},dep4={"SIE","Sistemas Energeticos"};

    int main() {//inicia main
        printf("\n Departamentos UACM Zaragoza\n");

        printf("\n Codigo 1: %s",dep1.codigo);
        printf("\n Nombre 1: %s",dep1.nombre);
        printf("\n-------------------------");
        printf("\n Codigo 2: %s",dep2.codigo);
        printf("\n Nombre 2: %s",dep2.nombre);
        printf("\n-------------------------");
        printf("\n Codigo 3: %s",dep3.codigo);
        printf("\n Nombre 3: %s",dep3.nombre);
        printf("\n-------------------------");
        printf("\n Codigo 4: %s",dep4.codigo);
        printf("\n Nombre 4: %s",dep4.nombre);
        printf("\n-------------------------");
        
        
    getch();
    //System("PAUSE");
    } //termina main