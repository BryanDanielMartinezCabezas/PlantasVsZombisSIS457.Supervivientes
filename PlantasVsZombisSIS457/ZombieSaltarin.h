// ZombieSaltarin.h
#pragma once
#include "Zombi.h"

class ZombieSaltarin : public Zombi {
	int salto;
public:
	// Constructor sin parámetros
	ZombieSaltarin();

	// Métodos accesores
	int getSalto() { return salto; }
	void setSalto(int _salto) { salto = _salto; }

	// Método propio para saltar
	void saltar();
};
