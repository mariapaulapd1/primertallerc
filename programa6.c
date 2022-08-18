/*****
*Fecha: 17 de agosto 2022
*Autor: Maria Paula Parra
*Materia: Parallet and Distribuited Computing 
*Topico: matriz de 1
*******/ 

#include <stdio.h>
#include <stdlib.h>

int main (){
	
	unsigned short i,j,m,n; 
	
	printf("Ingresar la fila: "); 
	scanf("%hu", &m);
	
	printf("Ingresar la columna: "); 
	scanf("%hu", &n);
	
	for(i=0;i<m; i++){
		for(j=0;j<n;j++){
		printf("%d", rand()%2);
			
		}
		printf("\n");
	}
	return 0; 
}
