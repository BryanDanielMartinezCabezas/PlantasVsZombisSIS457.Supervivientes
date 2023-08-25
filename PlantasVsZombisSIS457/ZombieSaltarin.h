// ZombieSaltarin.h
#pragma once
#include "Zombi.h"

class ZombieSaltarin : public Zombi {
	int salto;
public:
	// Constructor sin par�metros
	ZombieSaltarin();

	// M�todos accesores
	int getSalto() { return salto; }
	void setSalto(int _salto) { salto = _salto; }

	// M�todo propio para saltar
	void saltar();
};
