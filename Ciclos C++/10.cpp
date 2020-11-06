//10. Leer un número entero y determinar a cuánto es igual la suma de todos los enteros comprendidos entre 1 y el número leído.
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
