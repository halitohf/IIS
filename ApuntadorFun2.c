#include <stdio.h>
#include <stdlib.h>

//declaracion de checklist (diccionaro de errores o fallas del sistema) en una funcion
    void erroresSistem(int numError){//Inicia funcion 

    char *errorDiccionario[]= 
    {"Error 1. No hay suficiente memoria",
    "Error 2. Verificar banco de datos",
    "Error 3. Espacio en disco ocupado",
    "Error 4. Bifurcacion de MBR  Master Boot Record",
    "Error 5. Sistema operativo dañado por DDL",
    "Error 6. Sistema operativo sin arranque",
    "Error 7. Error de Energia",
    "Error 8. Mala distribucion de carga",
    "Error 9. Vida util terminada",
    "Error 10. No hay errorverifica conexiones"};
    printf("\nDiccionario de Errores del Sistem Zaragoza\n\n");
    //Imprimir el numero de error y su descripcion
    printf("\nTipo y numero de Error es : %d\n%s, ",numError, errorDiccionario[numError-1]);

    }//Termina funcion

int main() {
    //Llamada de la funcion erroresSistema()
    int num;
    printf("\nIndica el numero de error");
    scanf("%d", num);
    erroresSistem(num);
    printf("\nAutor Jose de Jesus Zaragoza - 1/Sep/22\n");

    getchar();
}