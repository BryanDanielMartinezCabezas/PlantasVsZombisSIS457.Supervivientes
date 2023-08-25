#pragma once
#include "ZombieFutbolista.h"
class ZombiePeriodico :
    public ZombieFutbolista
{
    int furia = 0;
public:
    //Constructor
    ZombiePeriodico();
    //Metodos accesores
    int getFuria() { return furia; }
    void setFuria(int _furia) { furia = _furia; }
    //metodos propios
    void enojarse();
};

