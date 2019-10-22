/*
 * Empleado.h
 *
 *  Created on: 17 sep. 2019
 *      Author: profesor
 */

#ifndef PANTALLA_H_
#define PANTALLA_H_

#define STATUS_EMPTY 0
#define STATUS_NOT_EMPTY 1



#define QTY_NOMBRES 10
#define QTY_CARACTERES 50

/*
struct sPantalla
{
	int idEmpleado;
	int status;
	//***************
	char nombre[50];
	char apellido[50];
};
typedef struct sPantalla Pantalla;
*/
typedef struct
{
	int idEmpleado;
	int status;
	//***************
	char nombre[50];
	char apellido[50];
}Pantalla;


int initLugarLibreEmpleado(Pantalla *aArray, int cantidad);

int imprimirArrayEmpleados(Pantalla *aEmpleado, int cantidad);
int ordenarArrayEmpleados(Pantalla *aEmpleado, int cantidad);

int buscarLugarLibreEmpleado(Pantalla *aArray, int cantidad);
int buscarEmpleadoPorId(Pantalla *aArray, int cantidad,int id);
int bajaEmpleadoPorId(Pantalla *aArray, int cantidad,int id);
int modificarEmpleadoPorId(Pantalla *aArray, int cantidad,Pantalla empleado);

int altaEmpleadoPorId(Pantalla *aArray, int cantidad,Pantalla empleado);

int altaForzadaEmpleados(Pantalla *aArray, int cantidad);


#endif /* PANTALLA_H_ */
