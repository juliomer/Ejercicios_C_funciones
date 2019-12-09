/* Realizar un programa mediante un menú que me permita realizar una calculadora. 
*  En la cual cada opción se seleccionará pulsando los caracteres correspondientes, 
*  '+', '-', '*', '/', 'p'. Siendo 'p' la opción para calcular potencias con base 
*  y exponente enteros.
*/

#include <stdio.h>
#include <math.h>


// Prototipos
long suma(int a, int b);
long resta(int a ,int b);
long multi(int a, int b);
float div(int a, int b);
long pot(int a, int b);
long fact(int n);
char menu(void);


/* 
*  Programa principal
*/
void main(){
	// Variables	
	int op1=0, op2=0;
	int f=1;
	char opcion;
	
	do{
	opcion=menu();	
		
	switch(opcion){
	case '+':
		printf("Introduce operandos: ");
		scanf("%d %d", &op1, &op2);	
		printf("\nSuma(%d + %d): %d \n", op1, op2, suma(op1,op2));
		break;
	case '-':
		printf("Introduce operandos: ");
		scanf("%d %d", &op1, &op2);	
		printf("\nResta(%d - %d): %d \n", op1, op2, resta(op1, op2));		
		break;
	case '*':
		printf("Introduce operandos: ");
		scanf("%d %d", &op1, &op2);	
		printf("\nMultiplicacion(%d * %d): %d \n", op1, op2, multi(op1,op2));		
	break;
	case '/':
		do{		
			printf("Introduce operandos: ");
			scanf("%d %d", &op1, &op2);	
			if (op2==0){
				printf("\nEl segundo operando no puede ser cero \n");
			}
		}while (op2==0);
		printf("\nDivision(%d / %d): %0.2f \n", op1, op2, div(op1,op2));		
	break;
	case 'p':
		printf("Introduce operandos: ");
		scanf("%d %d", &op1, &op2);	
		printf("\nPotencia(%d ^ %d): %d \n", op1, op2, pot(op1,op2));		
	break;
	case 'f':
		printf("Introduce operando: ");
		scanf("%d", &f);	
		printf("\nFactorial(%d): %d \n", f, fact(f));		
	break;
	case 's':
		printf("\nFIN");
		break;
	default:
		printf("\nOpción incorrecta.");
		break;
	}
	
	}while (opcion!='s');
			
}



/* Definicion de funciones */

long suma(int a, int b){
	return a+b;
}


long resta(int a ,int b){
	return a-b;
}


long multi(int a, int b){
	return a*b;
}


float div(int a, int b){
	return (float)a/b;
}


long pot(int a, int b){
	//return pow(a,b);
	int r=1, cont=0;	
	if (b==0){
		return 1;
	}
	while (cont<b){	
	    cont++;
		r=r*a;
	}
	
	return r;
}


long fact(int n){
	if (n==0)
        return 1;
    else
         return n*fact(n-1);
}


char menu(void){
	char op;
	fflush(stdin);
	do{		
		printf("\nMenu Calculadora\n");	
		printf("Suma (+) \n");
		printf("Resta (-)\n");
		printf("Multiplicacion (*)\n");
		printf("Division (/)\n");
		printf("Potencia (p)\n");
		printf("Factorial (f)\n");
		printf("Salir (s)\n");
		printf("Introduce una opcion (+, -, *, /, p,f,s): ");
		scanf("%c", &op);
		if (!(op=='+' || op=='-' || op=='*' || op=='/' || op=='p' || op=='f' || op=='s')){
			printf("Opcion invalida\n");
		}
	}while (!(op=='+' || op=='-' || op=='*' || op=='/' || op=='p' ||op=='f' || op=='s'));
}

