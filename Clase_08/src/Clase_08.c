/*
 ============================================================================
 Name        : Clase_08.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

/*
 ============================================================================
 Name        : Clase_05.c
 Author      :
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================

  Hacer un programa con el siguiente menu:
   1) ingresar nuevo nombre (no acepta nombres repetidos)
   2) listar todo
   3) ordenar por nombre
   4) Borrar nombre. Se ingresa el nombre y si se encuentra se elimina de la lista

	El programa permitira ingresar hasta 100 nombres.

 */

#include <stdio.h>
#include <stdio_ext.h>
#include <stdlib.h>
#include <string.h>
#include "utn.h"
#define QTY_EMPLEADOS 10
#define QTY_NOMBRES 10
#define QTY_CARACTERES 50

int imprimirArrayString(char aNombres[][QTY_CARACTERES], int cantidad);

int main(void)
{
	char aNombres[QTY_NOMBRES][QTY_CARACTERES];
	char nombre[50];
	int i;

	for(i=0;i<5;i++){
		getString(nombre,"Ingrese el nombre",
				"ERROR", 1, 49, 2);
		strcpy(aNombres[i], nombre);
		printf("%s",aNombres[i]);
	}

	imprimirArrayString(aNombres,QTY_NOMBRES);

	return EXIT_SUCCESS;
}

int imprimirArrayString(char aNombres[][QTY_CARACTERES], int cantidad){
	int i;
	int retorno = -1;
	if(aNombres != NULL && cantidad>0){
		retorno = 0;
		for(i=0;i<cantidad;i++){
			printf("Nombre: %s \n",aNombres[i]);
		}
	}
	return retorno;
}

