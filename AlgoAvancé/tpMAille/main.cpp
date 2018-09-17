#include "liste.h"
#include <iostream>

using namespace std;

int main()
{
	Liste L;
	maillon ap = maillon(5);
	maillon *A;
	A = &ap;
	maillon ab= maillon(10);
	maillon *B;
	B=&ab;
	L.InsertionEnTete(A);
	L.InsertionEnQueue(B);
	L.Affich();
}
