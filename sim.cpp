#include "sim.h"
#include <stdlib.h>
#include <iostream>


sim_t* CrearSim(int ancho_, int largo_, int cant_robots_, int modo_)
{
	sim_t* simulation=NULL;			//creo una simulacion
	simulation = (sim_t*)malloc(sizeof(sim_t));	//reservo memoria
	if (simulation != NULL)			//si se pudo guardar memoria
	{
		switch (modo_)		//defino el modo de la simulacion
		{
			case 1:case 2:

			{
				simulation->modo = modo_;
				break;
			}
			default:		//si se ingresaron valores no validos para el modo
			{
				//imprimir "ingrese modo valido (1 o 2)"
				free(simulation);	//libera memoria
				simulation = NULL;
				return simulation;		//termina devolviendo NULL
			}
		}
		//Defino los elementos de la simulacion con valores iniciales
		simulation->cant_robots = cant_robots_;
		simulation->tickcount = 0;
		simulation->piso = init_Piso(ancho_, largo_);
		simulation->robots = initRobots(cant_robots_, (simulation->piso));
	}
	return simulation;
}

void destroy_sim(sim_t* simulation)
{
	free(simulation);
	simulation = NULL;
	return;
}