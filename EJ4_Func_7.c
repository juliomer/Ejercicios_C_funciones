/* Realizar un programa mediante un menú que convierta en ambos sentidos 
*  de grados centígrados a grados Fahrenheit y viceversa.
*/

#include <stdio.h>

// Constantes
#define FACTOR 1.8


// Prototipos
float ConvertirC(float f);
float ConvertirF(float c);
int menu(void);

/* 
*  Programa principal
*/
void main(){
	
	int opcion=0;
	float cent=0, far=0;
	
	do{	
	opcion=menu();
	
	switch(opcion){
	case 1:
		printf("\nIndica grados (ºC): ");
		scanf("%f", &cent);		
		printf("\nFarenheit: %0.2f ºF\n\n", ConvertirF(cent));
		break;
	case 2:
		printf("\nIndica grados (ºF): ");
		scanf("%f", &far);		
		printf("\nCentigrados: %0.2f ºC\n\n", ConvertirC(far));
		break;
	case 0:
		printf("\nFIN");
		break;
	default:
		printf("\nOpcion incorrecta.");
		break;
	}
	
	}while (opcion!=0);
		
}


/* Definicion de funciones */

int menu(void){
	int op=0;
	printf("\nConversion de temperaturas\n");
	printf("1. Grados Centigrados a Farenheit\n");
	printf("2. Grados Farenheit a Centigrados\n");
	printf("0. Salir\n");
	printf("Introduce una opcion: ");
	scanf("%d", &op);
	return op;
}


float ConvertirF (float c){
	return ((FACTOR*c)+32);	
}


float ConvertirC (float f){
	return ((f-32)/FACTOR);
}


