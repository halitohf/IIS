
#include <stdio.h>

//declaracion 

struct alumno{//inicio 
    char no[25];
    char ap[25];
    int edad;
    int anio;
    //para almacenar 4 calificaciones
    int nota[4];//guarda 4 calificaciones a capturar por el usuario
    float prom;//variable factor para calcular promedio
}R1={"Jose de Jesus","Zaragoza",48,1};

int main() {//inicia main para compilar y ejecutar programa
    int i,acum=0;//variable i contador para for y variable acumuladora para sumar calificaciones y promediar
    for(i=0;i<4;i++){//iniciar for para captura de calificaciones
        printf("\nIngrese califaciones %d :",(i+1));
        scanf("%d",&R1.nota[i]);//almacenar valores en memoria
        acum = acum + R1.nota[i];//guardar los valores de suma de arreglo nota para variable R1
    }//termina for para capturar de calificaciones
        R1.prom = (float) acum/4; //optiene resultado de promedio para 4 calificaciones
        printf("El promedio del alumno %s es, %s es: %.2f", R1.ap, R1.no, R1.prom);
    getchar();//pausa
}//termina main para compilar y ejecutar programa