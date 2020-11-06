//36. Mostrar en pantalla la tabla de multiplicar del número 5.
//Jhon Murillo Ficha: 1752634
#include<iostream>
#include<cstdlib>
using namespace std;

int main ()
{
	int(cls);
	int n, z, r;
	n=5;
	z=1;
	r=5;
	cout<<("Tabla de multiplicar del numero 5.")<<endl;
	do
	{
		cout<<n<<("x")<<z<<("=")<<r<<endl;
		z=z+1;
		r=n*z;
	}
	while(z<11);
	system("PAUSE");
}
