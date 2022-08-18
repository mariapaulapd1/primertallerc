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
		printf("%d", rand()%100);
			
		}
		printf("\n");
	}
	return 0; 
}