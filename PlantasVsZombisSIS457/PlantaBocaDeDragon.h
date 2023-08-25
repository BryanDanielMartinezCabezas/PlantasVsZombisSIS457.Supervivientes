#pragma once
#include "Planta.h"
//BocaDeDragon
//planta que lanza fuego en un rango determinado y da�a a los zombies que esten en ese rango
class PlantaBocaDeDragon :
    public Planta
{
private:
	int fuego;
	int rangoDanio;//rango da�o
public:
	//constructores
	PlantaBocaDeDragon();
	PlantaBocaDeDragon(int _fuego, int _rangoDanio);

	//metodos propios
	void lanzarFuego();

	//Metodos accesores
	int getFuego() { return fuego; }
	void setFuego(int _fuego) { fuego = _fuego; }

	int getRangoDanio() { return rangoDanio; }
	void setRangoDanio(int _rangoDanio) { rangoDanio = _rangoDanio; }
};

