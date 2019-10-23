/*
 * persona.c
 *
 *  Created on: 22 oct. 2019
 *      Author: profesor
 */

#include "persona.h"
#include <stdio.h>
#include <stdlib.h>

Persona* new_Persona()
{
	return malloc(sizeof(Persona));
}

Persona* new_PersonaParametros(int idPersona,int status,char* nombre, int	edad, float altura)
{
	Persona* retorno = NULL;
	Persona* this;
	this = new_Persona();
	if(this != NULL)
	{
		if( 	per_setNombre(this,nombre) == 0 &&
				per_setEdad(this,edad) == 0 &&
				per_setAltura(this,altura)== 0)
		{
			retorno = this;
		}
		else
		{
			delete_Persona(this);
		}

	}
	return retorno;
}


void delete_Persona(Persona* this)
{
	free(this);
}

int per_setNombre(Persona* this, char* nombre)
{
	int retorno = -1;
	if(this!=NULL && isValidNombre(nombre))
	{
		strcpy(this->nombre,nombre);
		retorno = 0;
	}
	return retorno;
}

int per_getNombre(Persona* this, char* nombre)
{
	int retorno = -1;
	if(this!=NULL && nombre!=NULL)
	{
		strcpy(nombre, this->nombre);
		retorno = 0;
	}
	return retorno;
}

static int isValidNombre(char* nombre)
{
	return 1;
}


int per_setEdad(Persona* this, int edad)
{
	int retorno = -1;
	if(this!=NULL && isValidEdad(edad))
	{
		this->edad=edad;
		retorno = 0;
	}
	return retorno;
}

int per_getEdad(Persona* this, int* edad)
{
	int retorno = -1;
	if(this!=NULL && edad!=NULL)
	{
		*edad=this->edad;
		retorno = 0;
	}
	return retorno;
}

static int isValidEdad(int* edad)
{
	return 1;
}


int per_setAltura(Persona* this, float altura)
{
	int retorno = -1;
	if(this!=NULL && isValidAltura(altura))
	{
		this->altura=altura;
		retorno = 0;
	}
	return retorno;
}

int per_getAltura(Persona* this, float* altura)
{
	int retorno = -1;
	if(this!=NULL && altura!=NULL)
	{
		*altura=this->altura;
		retorno = 0;
	}
	return retorno;
}

static int isValidAltura(float* altura)
{
	return 1;
}


















