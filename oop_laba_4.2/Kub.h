#pragma once
#include "Abstract.h"

class Kub : public Abstract
{
private:

    int a;

public:
    void set_a(int);

    int get_a() const;

    Kub();
    Kub(int);
    Kub(Kub&);

    virtual void Print();
    virtual double SurfaceArea();
};

