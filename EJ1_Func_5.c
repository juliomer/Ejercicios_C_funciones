/* Conversion Ptas a Euros y viceversa */

#include <stdio.h>

// Constantes
#define FACTOR 166.386

/* Prototipos */
float ConvertirEuros(long ptas);
float ConvertirPtas(float euros);
int menu(void);


/* 
*  Programa principal
*/
void main(){
	// Variables
	int op=0;
	float n=0, pesetas=0, eur=0;
	
	do{	
	op=menu();
	
	switch(op){
	case 1:
		printf("\nIntroduce cantidad en pesetas: ");
		scanf("%f", &pesetas);
		printf("\nResultado en Euros: %0.2f E\n\n",ConvertirEuros(pesetas) );
		break;
	case 2:
		printf("\nIntroduce cantidad en Euros: ");
		scanf("%f", &eur);
		printf("nResultado en Pesetas: %0.2f ptas\n\n",ConvertirPtas(eur) );
		break;
	case 0:
		printf("\nFIN");
		break;
	default:
		printf("\nOpcion incorrecta.\n");
		break;
	}
	
	}while (op!=0);
	
}


/* 
*  Funciones
*/

float ConvertirEuros(long ptas){
	return ptas/FACTOR;
}


float ConvertirPtas(float euros){
	return euros*FACTOR;
}


int menu(void){
	int opcion=0;
	printf("Conversion Ptas a Euros y viceversa\n");
	// Datos 
	printf("1. Conversion Pesetas a Euros\n");
	printf("2. Conversion Euros a Pesetas\n");
	printf("0. Salir\n");
	printf("Introduce una opcion: ");
	scanf("%d", &opcion);
	return opcion;
}

