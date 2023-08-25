#pragma once
#include "Zombi.h"
class ZombieFutbolista :
    public Zombi
{
    int armadura = 100;
public:
    ZombieFutbolista();
    //metodos accesores
    int getArmadura() { return armadura; }
    void setArmadura(int _armadura) {armadura = _armadura;
    };
    //metodos propios
    void taclear();
};