//9. Determinar la hipotenusa de un triángulo rectángulo conocidas las longitudes de sus dos catetos. Desarrolle el algoritmo correspondiente.
//Jhon Murillo Ficha: 1752634
#include<iostream>
#include<cstdlib>
#include <math.h>
using namespace std;

int main ()
{
	int(cls);
	double c1, c2, hc, h;
	cout<<("Digite cateto 1.")<<endl;
	cin>>c1;
	cout<<("Digite cateto 2.")<<endl;
	cin>>c2;
	hc=(c1*c1)+(c2*c2);
	h=sqrt(hc);
	cout<<("La Hipotenusa es : ")<<h<<endl;
	system("PAUSE");
}
