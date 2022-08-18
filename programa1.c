/*****
*Fecha: 15 de agosto 2022
*Autor: Maria Paula Parra
*Materia: Parallet and Distribuited Computing 
*Topico: Producto de dos enteros 
*******/ 


#include <stdio.h>

int main (){
int x, y, producto; 
	
	printf("\n Introduzca el primer numero (entero): "); 
	scanf("%d", &x); 
	printf("\n Introduzca el segundo numero (entero): "); 
	scanf("%d", &y);
	
	producto = x * y; 
	
	printf("\n\n la multiplicacion es: %d \n\n",producto); 
	
	
	return 0; 
}
