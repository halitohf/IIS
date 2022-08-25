#include <stdio.h>

//declaracion de arreglo unidimnesional para almacenar 5 calificaciones
float caliArre[5];//arreglo global que tiene alcance en todas las areas del progras funciones, estructruras de contron, main
float sumaPromedio=0;//variable global acumuladora, sumadora


//funcion miniprograma-subprograma
void capturaCali(){
      for(int i=0;i<=4;i++){//inicia for para capturar
            printf("\nCaptura calificacion %d : ",i);
            scanf("%f",&caliArre[i]);
      }//termina for para capturar
}//termina funcion

//funcion miniprograma-subprograma para imprimir valores del arreglo
void imprimirCali(){
      for(int i=0;i<=4;i++){
            printf("\nCali es %d : %f",i,caliArre[i]);
      }//termina for
}//termina funcion
 
//funcion miniprograma-subprograma para sumar y promediar valores del arreglo
void sumaProm(){
      for(int i = 0; i<=4; i++){
            sumaPromedio=sumaPromedio+caliArre[i];        
      }
      printf("\nSuma es  %f :",sumaPromedio);
      printf("\nPromedio es  %2f :",sumaPromedio/5);
      }//termina funcion

int main () {//inicia funcion main para compilar y ejecurar programa
      int menu;//variable tipo entero para menu
      do{//inicia do-while   
            printf("\n\nMenu general \n(Selecciona)\n1.- Captura de calificaciones\n2.- Consulta de calificaciones\n3.- Promedio/Suma de calificaciones\n4.- Salir\n\n");
            scanf("%d",&menu);//guarda opcion de menu
            switch(menu){//inicia switch
                case 1:
                  capturaCali();//llamada de la funcion captura
                  break;
                case 2:
                  imprimirCali(); //llamada de la funcion imprimir
                  break;
                case 3:
                  sumaProm();//llamada de la funcion suma promedio
                  break;
                case 4:
                  printf("\nFinalizo programa");
                  break;
                default:
                  printf("\nOpcion invalida");
                  break;
            }//termina switch
      }while(menu!=4);
getchar();               
} //termina funcion main
