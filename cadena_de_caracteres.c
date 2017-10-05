// Cadena de caracteres (Strings)

#include <stdio.h>
#include <string.h>

int main(){
	
	char nombre[10]={'G','e','r','m','a','n'};
	
	int i;
	
	for ( i = 0 ; i < 10 ; i++){
		
		printf("%c\n", nombre[i]);
		
	}

	printf("Teclea una cadena: ");
//	scanf("%s\n", &nombre);
	gets(nombre);
//	printf("%s\n\n", nombre);
	
	for( i = 0 ; i<strlen(nombre) ; i++ ){
		
		printf("%c\n", nombre[i]);
		
	}
	

	system ("pause");
	return 0;

}

// Clase 04 10 2017 -- Facultad de Ingeniería UNAM -- Bloque 136 EE 
