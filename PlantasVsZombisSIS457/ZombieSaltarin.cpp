#include "ZombieSaltarin.h"

// Implementaci�n del constructor sin par�metros
ZombieSaltarin::ZombieSaltarin() {
	// Inicializar las propiedades espec�ficas de ZombieSaltarin
	salto = 10;
}

// Implementaci�n del m�todo propio para saltar
void ZombieSaltarin::saltar() {
	for (int i = 0; i < 10; i++) {
		posicionY += direccionY * velocidadMovimiento;
		// Salta seg�n su velocidad
	}
};

