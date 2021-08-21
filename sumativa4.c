#include <stdio.h>

int main ()
{
   int vent[10][10]; 
   int i, j; 
   int filas = 3; 
   int columnas = 5;
   float total;  
   float suma; 
   float prom; 
   float prom_vent_tot; 

   

   printf("\n\t\t   Evaluacion Sumatica #4 \n ");
   
   printf("\n   Introduzca el valor de las ventas:\n ");
   printf ("\n");
   for ( i = 0; i < filas; i++ ) 
   { 
      for (j = 0; j < columnas; j++) 
      {
         printf("Venderor %d  |  Dia %d: ", i + 1 , j + 1);  
         scanf("%d", &vent[i][j]); 
         
      }
   }

   printf ("\n\t\t    NASA (Nutricion Animal S.A.) \n"); 
   printf ("\t      Lunes   Martes  Miercoles Jueves Viernes \n"); 
   for ( i = 0; i < filas; i++)
   {
     suma = 0 ; 
      printf ("Vendedor %d :  ", i + 1); 
      for (j = 0; j < columnas; j++)
      { 
         printf(" $%d\t", vent[i][j]);
         suma += vent[i][j]; 
         prom = suma / 5 ; 

      }

    
    prom_vent_tot += prom/3; 
    printf("Total de venta del dia = $%.2f", total = suma  );
    printf("\t Promedio de Venta diaria = $%.2f", prom);
   
    printf ("\n");
   }  

   printf("\n\t     El promedio de ventas diarias de los 3 vendedores es de:  $%.2f ", prom_vent_tot ); 

   return 0; 

}
