// Números Random

#include <stdio.h>
#include <stdlib.h>

int main(){

	int i, a, b;
	
	printf("Numeros random: \n\n");
	
	for( a=0 ; a<20 ; a++){
		
		for( b=0 ; b<5 ; b++){
			
			i = rand();
			printf("%d\t", i);
						
		}
		
	}
	
	printf("\n\n");
	
	system ("pause");
	return 0;

}

// Clase 04 10 2017 -- Facultad de Ingeniería UNAM -- Bloque 136 EE 
