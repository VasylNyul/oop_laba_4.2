#pragma once
#include "Abstract.h"

class Tetraedr : public Abstract
{
private:
    int a;
public:
    void set_a(int);

    int get_a() const;

    Tetraedr();
    Tetraedr(int);
    Tetraedr(Tetraedr&);

    virtual void Print();
    virtual double SurfaceArea();
};