/*
 ============================================================================
 Name        : Clase_08.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdio_ext.h>
#include <stdlib.h>
#include <string.h>

#include "Pantalla.h"
#include "utn.h"

#define QTY_EMPLEADOS 10





int main(void)
{

	Pantalla panAux;

		switch(opcion)
		{
			case 3:
			{
				pedirDatosPantalla(&panAux);

				modificarPantalla(lista,len,panAux);
				break;
			}
		}















	struct sPantalla aEmpleados[QTY_EMPLEADOS];
	initLugarLibreEmpleado(aEmpleados,QTY_EMPLEADOS);
altaForzadaEmpleados(aEmpleados,QTY_EMPLEADOS);
	struct sPantalla unEmpleado = {5, STATUS_EMPTY, "Maria", "Gomez"};

	struct sPantalla otroEmpleado = {6, STATUS_EMPTY, "Pepe", "Argento"};

	if(altaEmpleadoPorId(aEmpleados,QTY_EMPLEADOS,unEmpleado)==0)
	{
		printf("Esta todo ok\n");
	}
	else
	{
		printf("no hay lugar\n");
	}

	if(altaEmpleadoPorId(aEmpleados,QTY_EMPLEADOS,otroEmpleado)==0)
		{
			printf("Esta todo ok\n");
		}
		else
		{
			printf("no hay lugar\n");
		}


	imprimirArrayEmpleados(aEmpleados,QTY_EMPLEADOS);






	/*struct sEmpleado bEmpleado;
	int i;
	int idEmpleado = 0;

	for(i=0;i<3;i++){

		getString(bEmpleado.nombre,"Ingrese el nombre",
				"ERROR", 1, 49, 2);

		getString(bEmpleado.apellido,"Ingrese el apellido",
						"ERROR", 1, 49, 2);

		bEmpleado.idEmpleado = idEmpleado;
		idEmpleado++;
		bEmpleado.status = STATUS_NOT_EMPTY;

		aEmpleados[i] = bEmpleado;
	}
	imprimirArrayEmpleados(aEmpleados,3);*/

	return EXIT_SUCCESS;
}













Pantalla g;
g.id=5;
pedirDatosPantalla(&g);

int pedirDatosPantalla(Pantalla* pPantalla)
{
	Pantalla p;
	getInt(&p.idPantalla,"ingresa id");
	getString(p.nombre,"ingresa nombre")
	getString(p.direccion,"ingresa dire")

	p.status = NOT_EMPTY;

	*pPantalla = p;
}




