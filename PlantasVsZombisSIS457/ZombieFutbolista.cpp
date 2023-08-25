#include "ZombieFutbolista.h"
// Implementación del constructor sin parámetros
ZombieFutbolista::ZombieFutbolista() {
}
void ZombieFutbolista::taclear() {
	for (int i = 0; i < 10; i++) {
		posicionX += direccionX * velocidadMovimiento * 3;
	}
}