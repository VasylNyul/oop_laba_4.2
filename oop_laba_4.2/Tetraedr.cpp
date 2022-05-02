#include "Tetraedr.h"

void Tetraedr::set_a(int x)
{
	this->a = a;
}

int Tetraedr::get_a() const
{
	return a;
}

Tetraedr::Tetraedr()
	: a(0)
{}

Tetraedr::Tetraedr(int a = 0)
	: a(a)
{}

Tetraedr::Tetraedr(Tetraedr& q)
	: Tetraedr(q.get_a())
{}

void Tetraedr::Print()
{
	cout << "The size of the side of the Tetraedr: " << get_a() << endl;
}

double Tetraedr::SurfaceArea()
{
	return  sqrt(3) * (get_a() * get_a());
}