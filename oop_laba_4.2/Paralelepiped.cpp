#include "Paralelepiped.h"
void Paralelepiped::set_a(int x)
{
	this->a = a;
}

void Paralelepiped::set_b(int b)
{
	this->b = b;
}

void Paralelepiped::set_c(int c)
{
	this->c = c;
}

int Paralelepiped::get_a() const
{
	return a;
}

int Paralelepiped::get_b() const
{
	return b;
}

int Paralelepiped::get_c() const
{
	return c;
}

Paralelepiped::Paralelepiped()
	: a(0), b(0), c(0)
{}

Paralelepiped::Paralelepiped(int a = 0, int b = 0, int c = 0)
	: a(a), b(b), c(c)
{}

Paralelepiped::Paralelepiped(Paralelepiped& q)
	: Paralelepiped(q.get_a(), q.get_b(), q.get_c())
{}

void Paralelepiped::Print()
{
	cout << "The size of the height of the Paralelepiped: " << get_a() << endl;
	cout << "The size of the width  of the Paralelepiped:: " << get_b() << endl;
	cout << "The size of the length of the Paralelepiped:: " << get_c() << endl;
}

double Paralelepiped::SurfaceArea()
{
	return 2 * (get_a() * get_b() + get_c() * get_b() + get_a() * get_c());
}

