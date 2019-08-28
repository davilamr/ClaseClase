/*
 ============================================================================
 Name        : Clase_03.c
 Author      : Mauro
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define NUMEROS_A_PEDIR 6
int pedirNumerosYCalcular(int *maximo, int *minimo, float *promedio);

int main(void) {
	int maximo;
	int minimo;
	float promedio;
	if (pedirNumerosYCalcular(&maximo,&minimo,&promedio)==0){
		printf("Maximo: %d  Minimo: %d  Promedio: %.2f ",maximo,minimo,promedio);
	}else{
		printf("Error.");
	}


	return 0;
}

int pedirNumerosYCalcular(int *maximo, int *minimo, float *promedio)
{
	int retorno = 0;
	int numero;
	int acumulador = 0;
	int contador = 0;
	int maximoAuxiliar;
	int minimoAuxiliar;

	while (contador < NUMEROS_A_PEDIR)
	{
		printf("Ingrese un numero: ");
		scanf("%d",&numero);
		if(contador == 0){
			maximoAuxiliar = numero;
			minimoAuxiliar = numero;
		}
		if (numero > maximoAuxiliar){
			maximoAuxiliar = numero;
		}
		if (numero < minimoAuxiliar){
			minimoAuxiliar = numero;
		}
		acumulador = acumulador + numero;
		contador++;
	}
	*maximo = maximoAuxiliar;
	*minimo = minimoAuxiliar;
	*promedio = (float) acumulador / (float) contador;
	return retorno;
}


