//10. Leer un n�mero entero y determinar a cu�nto es igual la suma de todos los enteros comprendidos entre 1 y el n�mero le�do.
//Jhon Murillo Ficha: 1752634
#include<iostream>
#include<cstdlib>
using namespace std;

int main ()
{
	int(cls);
	int n, z, p;
	cout<<("Digite numero entero.")<<endl;
	cin>>z;
	n=0;
	p=0;
	while(n<z)
	{
		n=n+1;
		p=n+p;
	}
	cout<<("La suma es igual a : ")<<p<<endl;
	system("PAUSE");
}
