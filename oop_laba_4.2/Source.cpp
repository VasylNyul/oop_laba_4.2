#include "Kyl9.h"
#include "Kub.h"
#include "Paralelepiped.h"
#include "Tetraedr.h"

int main()
{
    cout << "Kub: " << endl;
    Kub A(3);
    A.Print();
    cout << " The surface area of the Kub: " << A.SurfaceArea() << endl << endl;

    cout << "Kyl9:" << endl;
    Kyl9 B(3);
    B.Print();
    cout << " The surface area of the Kyl9: " << B.SurfaceArea() << endl << endl;

    cout << "Paralelepiped:" << endl;
    Paralelepiped C(2, 3, 4);
    C.Print();
    cout << "The surface area of the Paralelepiped: " << C.SurfaceArea() << endl << endl;

    cout << "Tetraedr:" << endl;
    Tetraedr D(3);
    D.Print();
    cout << " The surface area of the Tetraedr: " << D.SurfaceArea() << endl << endl;


    Abstract* pa = new Kub();
    Abstract* pb = new Kyl9();
    Abstract* pc = new Paralelepiped();
    Abstract* pd = new Tetraedr();

    cout << endl;
    cout << typeid(pa).name() << endl;
    cout << typeid(*pa).name() << endl;
    cout << typeid(pb).name() << endl;
    cout << typeid(*pb).name() << endl;
    cout << typeid(pc).name() << endl;
    cout << typeid(*pc).name() << endl;
    cout << typeid(pd).name() << endl;
    cout << typeid(*pd).name() << endl << endl;

    delete pd, delete pc, delete pb, delete pa;

    Abstract* N[4];

    N[0] = &A;
    N[1] = &B;
    N[2] = &C;
    N[3] = &D;

    cout << " The surface area of the Kub: " << N[0]->SurfaceArea() << endl;
    cout << " The surface area of the Kyl9: " << N[1]->SurfaceArea() << endl;
    cout << " The surface area of the Paralelepiped: " << N[2]->SurfaceArea() << endl;
    cout << " The surface area of the Tetraedr: " << N[3]->SurfaceArea() << endl;

    return 0;

}