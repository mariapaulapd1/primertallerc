/*****
*Fecha: 15 de agosto 2022
*Autor: Maria Paula Parra
*Materia: Parallet and Distribuited Computing 
*Topico: diez primeros numeros naturales
*******/ 

#include <stdio.h>
void main (){
int i,j,filas; 
	printf("Ingresar numero de filas : "); 
	scanf("%d", &filas); 
	for (i=1;i<=filas;i++)
	{
	for (j=1;j<=i;j++)	
		printf("*"); 
		printf("\n");
	}
	
}