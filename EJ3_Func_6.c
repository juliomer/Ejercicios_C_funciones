/* Realizar un programa mediante un menú que me calcule las impedancias capacitivas 
*  e inductivas. 
*/

#include <stdio.h>

#define PI 3.141596
//#define F 50


/* Prototipos */
float Xl(float f, float l);
float Xc(float f,float c);
int menu(void);

/* 
*  Programa principal
*/
void main(){
	// Variables
	int opcion=0, f=50;
	float cap=0, ind=0;
	
	do{	
	opcion=menu();
	
	switch(opcion){
	case 1:
		printf("\nIndica Capacidad (Faradios): ");
		scanf("%f", &cap);		
		printf("\nXc: %0f Ohm\n\n", Xc(f,cap));
		break;
	case 2:
		printf("\nIndica Inductancia (Henrios): ");
		scanf("%f", &ind);		
		printf("\nXl: %0.2f Ohm\n\n", Xl(f,ind));
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
	printf("\nCalculo de Impedancias\n");
	// Datos 
	printf("1. Impedancia Capacitiva\n");
	printf("2. Impedancia Inductiva\n");
	printf("0. Salir\n");
	printf("Introduce una opcion: ");
	scanf("%d", &op);
	return op;
}


float Xc(float f,float c){
	return (1/(2.0*PI*f*c));	
}


float Xl(float f, float l){
	return (2*PI*f*l);
}


