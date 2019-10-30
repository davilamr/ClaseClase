#include <stdio.h>
#include <stdlib.h>
#include "LinkedList.h"
#include "Employee.h"

/** \brief Parsea los datos los datos de los empleados desde el archivo data.csv (modo texto).
 *
 * \param path char*
 * \param pArrayListEmployee LinkedList*
 * \return int
 *
 */
int parser_EmployeeFromText(FILE* pFile , LinkedList* pArrayListEmployee)
{
	char id[4096];
	char nombre[4096];
	char horasTrabajadas[4096];
	char sueldo[4096];
	while(!feof(pFile))
	{
		fscanf(pFile,"%[^,],%[^,],%[^,],%[^\n]\n",
						id,
						nombre,
						horasTrabajadas,
						sueldo);

		printf("%s\n",nombre);
	}
    return 1;
}

/** \brief Parsea los datos los datos de los empleados desde el archivo data.csv (modo binario).
 *
 * \param path char*
 * \param pArrayListEmployee LinkedList*
 * \return int
 *
 */
int parser_EmployeeFromBinary(FILE* pFile , LinkedList* pArrayListEmployee)
{

    return 1;
}
