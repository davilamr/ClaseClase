/*
 * Empleado.h
 *
 *  Created on: 17 sep. 2019
 *      Author: profesor
 */

#ifndef EMPLEADO_H_
#define EMPLEADO_H_

#define QTY_EMPLEADOS 10
#define QTY_NOMBRES 10
#define QTY_CARACTERES 50
struct sEmpleado
{
	int idEmpleado;
	int status;
	//***************
	char nombre[50];
	char apellido[50];
};

int imprimirArrayEmpleados(struct sEmpleado *aEmpleado, int cantidad);
int ordenarArrayEmpleados(struct sEmpleado *aEmpleado, int cantidad);

#endif /* EMPLEADO_H_ */
