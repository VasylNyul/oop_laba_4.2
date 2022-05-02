#include "Kyl9.h"

void Kyl9::set_a(int x)
{
	this->a = a;
}

int Kyl9::get_a() const
{
	return a;
}

Kyl9::Kyl9()
	: a(0)
{}

Kyl9::Kyl9(int a = 0)
	: a(a)
{}

Kyl9::Kyl9(Kyl9& q)
	: Kyl9(q.get_a())
{}

void Kyl9::Print()
{
	cout << "Radius of the Kyl9: " << get_a() << endl;
}

double Kyl9::SurfaceArea()
{
	return 4 * 3.14 * (get_a() * get_a());
}
