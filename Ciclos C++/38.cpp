//38. Leer un número entero y mostrar en pantalla su tabla de multiplicar.
//Jhon Murillo Ficha: 1752634
#include<iostream>
#include<cstdlib>
using namespace std;

int main ()
{
	int(cls);
	int n, z, r;
	cout<<("Digite numero entero.")<<endl;
	cin>>n;
	z=1;
	r=n;
	cout<<("Tabla de multiplicar del ")<<n<<endl;
	do
	{
		cout<<n<<("x")<<z<<("=")<<r<<endl;
		z=z+1;
		r=n*z;
	}
	while(z<11);
	system("PAUSE");
}
