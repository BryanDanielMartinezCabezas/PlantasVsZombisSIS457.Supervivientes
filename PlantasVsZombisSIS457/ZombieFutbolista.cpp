#include "ZombieFutbolista.h"
// Implementaci�n del constructor sin par�metros
ZombieFutbolista::ZombieFutbolista() {
}
void ZombieFutbolista::taclear() {
	for (int i = 0; i < 10; i++) {
		posicionX += direccionX * velocidadMovimiento * 3;
	}
}