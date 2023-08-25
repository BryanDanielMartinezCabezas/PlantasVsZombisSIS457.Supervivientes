#include "ZombieSaltarin.h"

// Implementación del constructor sin parámetros
ZombieSaltarin::ZombieSaltarin() {
	// Inicializar las propiedades específicas de ZombieSaltarin
	salto = 10;
}

// Implementación del método propio para saltar
void ZombieSaltarin::saltar() {
	for (int i = 0; i < 10; i++) {
		posicionY += direccionY * velocidadMovimiento;
		// Salta según su velocidad
	}
};

