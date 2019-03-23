#ifndef SIM_H
#define SIM_H
#include "piso.h"
#include "robot.h"

/*Clase de una simulacion.*/
class sim_t
{
public:

	Robot_t* robots;	//puntero a robots
	int cant_robots;	//cantidad de robots
	Piso_t* piso;		//puntero a piso
	int modo;			//modo (1 o 2)
	int tickcount;		//contador de ticks

};

/*Crea una simulacion.
	Recibe: ancho y largo del piso, cantidad de robots y el modo deseado
	Devuelve: puntero a simulacion*/
sim_t* CrearSim(int ancho_, int largo_, int cant_robots_, int modo_);

void destroy_sim(sim_t* simulation);
#endif
