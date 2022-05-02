#pragma once
#include "Abstract.h"

class Paralelepiped : public Abstract
{
private:
    int a, b, c;
public:
    void set_a(int);
    void set_b(int);
    void set_c(int);

    int get_a() const;
    int get_b() const;
    int get_c() const;

    Paralelepiped();
    Paralelepiped(int, int, int);
    Paralelepiped(Paralelepiped&);

    virtual void Print();
    virtual double SurfaceArea();
};

