/* Realizar un programa mediante un menú que me permita calcular 
*  las áreas del triangulo,  trapecio y circulo
*  Calcular área de circulo y trapecio A=PI*r*r y T=(b+b)*h/2 con funciones
*/

#include <stdio.h>

// Constantes
#define PI 3.141596


/* Prototipos */
float AreaTriangulo(int b,int h);
float AreaTrapecio(int B, int b, int h);
float AreaCirculo(float radio);
int menu(void);

/* 
*  Programa principal
*/
void main(){
	// Variables	
	int r=0, bi=0, bs=0, ht=0, baset=0, altt=0;
	int opcion=0;
	
	do{	
	opcion=menu();
	
	switch(opcion){
	case 1:
		printf("Introduce radio del circulo: ");
		scanf("%d", &r);	
		printf("\nArea Circulo: %0.2f \n\n", AreaCirculo(r));
		break;
	case 2:
		printf("Introduce base y altura del triangulo: ");
		scanf("%d %d", &baset, &altt );	
		printf("\nArea Triangulo(b=%d, h=%d)= %0.2f \n\n", baset, altt, AreaTriangulo(baset, altt));
		break;
	case 3:
		printf("\nIntroduce bases y altura del trapecio: ");
		scanf("%d %d %d", &bi, &bs, &ht);	
		printf("\nArea Trapecio(BI=%d, BS=%d, H=%d)= %0.2f \n\n", bi, bs, ht, AreaTrapecio(bi, bs, ht));
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
	int op;
	printf("\nCalculo de areas\n");
	// Datos 
	printf("1. Calculo area circulo \n");
	printf("2. Calculo area triangulo \n");
	printf("3. Calculo area trapecio \n");
	printf("0. Salir \n");
	printf("Introduce una opcion: ");
	scanf("%d", &op);
	return op;
}

float AreaCirculo(float radio){
	return (PI*radio*radio);	
}

float AreaTriangulo(int b,int h){
	return (b*h/2);	
}

float AreaTrapecio(int B, int b, int h){
	float temp;
	temp= (B+b)*h/2;	
	return temp;
}
