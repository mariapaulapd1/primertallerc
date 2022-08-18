/*****
*Fecha: 15 de agosto 2022
*Autor: Maria Paula Parra
*Materia: Parallet and Distribuited Computing 
*Topico: Calculo distancia entre dos puntos
*******/ 

#include <stdio.h>
#include <math.h>
int main(){
   int num1, num2, x1, x2, y1, y2;
   float distance;
  
   // Asking for input
   printf("Ingresar X1 y Y1:  ");
   scanf("%d %d", &x1, &y1);
   printf("Ingresar X2 y Y2: ");
   scanf("%d %d", &x2, &y2);
  
   // Calculating the distance
   num1 = x2 - x1;
   num2 = y2 - y1;
   distance = sqrt((num1 * num1) + (num2 * num2));
  
   // Displaying output
   printf("Distance: %.2f \n\n", distance);
   return 0;
}

