#include <stdio.h>
#include <conio.h>

struct pv{
    char codigo[10];//datos
    char nombre[20];//datos
    int ventasDia[4];//dias
    float promedio;//calcular promedio
}Prod1={"COD1","Producto 1"};

int main () {//inicia main
    int i, acum=0;
    for(i=0;i<4;i++){//inicia for para captura de datos
        printf("\n Ingrese Ventas dia %d : ",(i+1));
        scanf("%d",&Prod1.ventasDia[i]);
        acum = acum + Prod1.ventasDia[i];
    }//termina for para captura de datos
        Prod1.promedio = (float) acum/4;//calcular promedio 
        //imprimir
    printf("\nPunto de venta Tiendas Zaragoza\n");
    printf("\nCodigo producto: %s \n",Prod1.codigo);
    printf("\nNombre producto: %s \n",Prod1.nombre);
    /*printf("\nVenta dia 1: %d \n",Prod1.ventasDia[0]);
    printf("\nVenta dia 2: %d \n",Prod1.ventasDia[1]);
    printf("\nVenta dia 3: %d \n",Prod1.ventasDia[2]);
    printf("\nVenta dia 4: %d \n",Prod1.ventasDia[3]);
    */
    for(int i = 0;i<=3;i++){//inicia for para imprimir
        printf("\nVentas dia %d : %d",(i+1),Prod1.ventasDia[i]);

    }//termina for para imprimir
    printf("\nPromedio: %.2f \n",Prod1.promedio);
getch();
};//termina main