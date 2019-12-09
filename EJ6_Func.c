/*
* EJ6 Resolver mediante funciones un programa que pinte por pantalla 
* las siguientes figuras dado el tamaño del lado. Cuadrado, Triangulo rectángulo, 
* Triangulo equilatero. Utilizando los siguientes prototipos.
*/

# include <stdio.h>

// Prototipos
void cuadrado(int n);
void triangulo_iz_abajo(int n);
void triangulo_iz_arriba(int n);
void triangulo_centrado(int n);


// Programa principal
void main()  /* uso de indicadores con nos enteros y reales */
{	
	// Variables
	int opcion=0, tam=1;
	
	do{	
		opcion=menu();
		
		switch(opcion){
		case 1:
			printf("Introduce tamaño:  ");
			scanf("%d", &tam);	
			cuadrado(tam);
			break;
		case 2:
			printf("Introduce tamaño:  ");
			scanf("%d", &tam);	
			triangulo_iz_abajo(tam);
			printf("\n\n");
			triangulo_iz_arriba(tam);
			break;
		case 3:
			printf("Introduce tamaño:  ");
			scanf("%d", &tam);	
			triangulo_centrado(tam);
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



/* Funciones */

int menu(void){
	int op;
	printf("\nDibujor Geometricos\n");
	printf("1. Dibujar Cuadrado \n");
	printf("2. Dibujar Triangulo rectangulo\n");
	printf("3. Dibujar Triangulo \n");
	printf("0. Salir \n");
	printf("Introduce una opcion: ");
	scanf("%d", &op);
	printf("\n");
	return op;
}


void cuadrado(int n){	
	int i, j;	
	for(j=0; j<n; j++){
		for(i=0; i<n; i++){
			printf("*");
		}
		printf("\n");
	}
}


void triangulo_iz_abajo(int n){
	int i, j;	
	for(j=0; j<n; j++){
		for(i=0; i<(n-j); i++){
			printf("*");
		}
		printf("\n");
	}	
}


void triangulo_iz_arriba(int n){
	int i, j;	
	for(j=0; j<n; j++){
		for(i=0; i<=j; i++){
			printf("*");
		}
		printf("\n");
	}
}


void triangulo_centrado(int n){
	int i, j, k;	
	for(j=0; j<n; j++){
		if (j%2==0){		
			for(k=j; k<=(n/2); k++){
					printf(" ");
				}
			for(i=0; i<=j; i++){			
				printf("*");
			}
			printf("\n");
		} else {
			printf("\n");
		}
	}
}
