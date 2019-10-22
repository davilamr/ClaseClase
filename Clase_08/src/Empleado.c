/*
 * Empleado.c
 *
 *  Created on: 17 sep. 2019
 *      Author: profesor
 */
#include <stdio.h>
#include <stdio_ext.h>
#include <stdlib.h>
#include <string.h>

#include "Pantalla.h"
#include "utn.h"


int initLugarLibreEmpleado(Pantalla *aPantallas, int cantidad)
{
	int retorno = -1;;
	int i;
	if(aPantallas!=NULL && cantidad>0)
	{
		for(i=0;i<cantidad;i++)
		{
			aPantallas[i].status = STATUS_EMPTY;
		}
		retorno = 0;
	}

	return retorno;
}


int altaEmpleadoPorId(struct sPantalla *aArray, int cantidad,struct sPantalla empleado)
{

	/*indice = buscarLugarLibreEmpleado(----)
	 * si encontro lugar: inserto el empleado en el array.
	 * 			 Esta todo ok
	 * Si no econtro lugar: No esta todo OK
	 */
	int index;
	int retorno = -1;
	index = buscarLugarLibreEmpleado(aArray,cantidad);
	if(index!=-1)
	{
		empleado.status = STATUS_NOT_EMPTY;
		aArray[index] = empleado;
		retorno = 0;
	}

	return retorno;

}

int buscarLugarLibreEmpleado(struct sPantalla *aArray, int cantidad)
{
	int index= -1;
	int i;
	if(aArray!=NULL && cantidad>0)
	{
		for(i=0; i<cantidad; i++)
		{

			if(aArray[i].status == STATUS_EMPTY)
			{
				index = i;
				break;
			}
		}
	}


	return index;

}

int ordenarArrayEmpleados(struct sPantalla *aEmpleado, int cantidad){
	int i;
	int retorno = -1;
	struct sPantalla bEmpleado;
	int fSwap;
	if(aEmpleado != NULL && cantidad>0)
	{
		retorno = 0;
		do
		{
			fSwap = 0;
			for(i=0;i<cantidad-1;i++)
			{
				if(strncmp(aEmpleado[i].nombre,aEmpleado[i+1].nombre,QTY_CARACTERES)>0)
				{
					fSwap = 1;
					bEmpleado = aEmpleado[i];
					aEmpleado[i]=aEmpleado[i+1];
					aEmpleado[i+1]=bEmpleado;
				}
				else if(strncmp(aEmpleado[i].nombre,aEmpleado[i+1].nombre,QTY_CARACTERES)==0)
				{
					if(strncmp(aEmpleado[i].apellido,aEmpleado[i+1].apellido,QTY_CARACTERES)>0)
					{
						fSwap = 1;
						bEmpleado = aEmpleado[i];
						aEmpleado[i]=aEmpleado[i+1];
						aEmpleado[i+1]=bEmpleado;
					}
				}
			}
		}while(fSwap);
	}
	return retorno;
}

int altaForzadaEmpleados(struct sPantalla *aArray, int cantidad)
{
	int id[]={1,5,6,7,8,10,11,80,90};
	char nombre[][25] ={"Juan","Pedro","Maria","abraham","Eva","Adam","Jose","Pepe","Mario"};
	char apellido[][25]={"Gomez","Perez","Lopez","Rodriguez","Peron","Gomez","Perez","Rodriguez","Gutierrez"};

	int i;
	for(i=0; i<9; i++)
	{
		aArray[i].status = STATUS_NOT_EMPTY;
		aArray[i].idEmpleado = id[i];
		strncpy(aArray[i].nombre,nombre[i],25);
		strncpy(aArray[i].apellido,apellido[i],25);
	}
	return 1;
}

int imprimirArrayEmpleados(struct sPantalla *aEmpleado, int cantidad){
	int i;
	int retorno = -1;
	if(aEmpleado != NULL && cantidad>0)
	{
		retorno = 0;
		for(i=0;i<cantidad;i++)
		{
			if(aEmpleado[i].status==STATUS_NOT_EMPTY)
			{
				printf("%d -- %s -- %s\n", aEmpleado[i].idEmpleado,aEmpleado[i].nombre,aEmpleado[i].apellido);
			}

		}
	}
	return retorno;
}


int buscarPantallaPorId(Pantalla *aArray,
						int cantidad,
						int id)
{
	int i;
	int retorno=-1;
	for(i=0; i<cantidad; i++)
	{
		if(aArray[i].status==STATUS_NOT_EMPTY)
		{
			if(aArray[i].idPantalla==id)
			{
				retorno=i; // devuelvo la posicion
				break;
			}
		}
	}
	return retorno;
}

int variable;
printf("ingresa el tipo:");
getInt(&variable);

int getInt(int* pInt){
	scanf("%d",pInt);
	return 0;
}

char opciones[6]={'s','n','S','N','y','Y' };

getChar(&respuesta,"desea borrar? s/n","no!",optiones,6);

int getChar(char*pC,char* msg,char* msgErr,char* opciones,
											int lenOp)
{
	char c;

	if(esOpcionvalida(c,opciones,lenOp)) // max min

}

int esOpcionvalida(char c,char* opciones,int lenOp)
{
	int i;
	for(i=0; i<lenOp; i++)
		if(c==opciones[i])
			return 1; // es valido
	return 0;
}


static int generarId(void)
{
	static int laquequiera=0;
	laquequiera++;
	return laquequiera;
}


alta(lista, Pantalla pantalla)
{
	posLibre = buscarlibre()
	lista[posLibre] = pantalla;
	lista[posLibre].id = generarId();
}

struct Empleado{
	char nombre[50];
	char app[50];
	int dni;
};

struct Empleado lista[500];

















