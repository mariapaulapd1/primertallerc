/*****
*Fecha: 15 de agosto 2022
*Autor: Maria Paula Parra
*Materia: Parallet and Distribuited Computing 
*Topico: Convertir dias en anios, semanas y dias
*******/ 

#include <stdio.h>

	int main () {
	int dias, anos, semanas; 
	
	//aqui inserto el numero de dias que quiero calcular
	printf("Insertar días: ");
	scanf("%d",&dias); 
	
	
		
		//convierte dias en anos, semanas y dias
		
		anos = dias/365; 
		semanas = (dias % 365)/7; 
		dias = dias - ((anos*365) + (semanas*7)); 
		
		printf("Anos: %d\n", anos);
		printf("Semanas: %d\n", semanas); 
		printf("Dias: %d \n", dias);
		
		return 0;
		
	}
