/*
 * persona.h
 *
 *  Created on: 22 oct. 2019
 *      Author: profesor
 */

#ifndef PERSONA_H_
#define PERSONA_H_

typedef struct
{
	int idPersona;
	int status;
	//-----------
	char nombre[51];
	int	edad;
	float altura;
}Persona;


#endif /* PERSONA_H_ */
