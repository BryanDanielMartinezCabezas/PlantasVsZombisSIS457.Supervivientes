#include "ZombiePeriodico.h"
ZombiePeriodico::ZombiePeriodico() {
}
void ZombiePeriodico::enojarse() {
	cout << "El zombie se ah cabreado" << endl;
	setArmadura(0);
	cout << "El periodico se ah roto";
	setVelocidadAtaque(100);
	setvelocidadMovimiento(100);
	cout << "La velocidad del zombie ahora es " << getvelocidadMovimiento() << endl;
	cout << "La velocidad de ataque del zombie ahora es" << getVelocidadAtaque() << endl;
	for (int i = 0; i < 10; i++) {
		posicionX += direccionX * velocidadMovimiento * 3;
	}
}