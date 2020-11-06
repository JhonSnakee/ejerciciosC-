//37. Generar todas las tablas de multiplicar del 1 al 10.
//Jhon Murillo Ficha: 1752634
#include<iostream>
#include<cstdlib>
using namespace std;

int main ()
{
	int(cls);
	int n, z, r;
	for(int n=1;n<=10;n+=1)
	{
		cout<<("Tabla de multiplicar del ")<<n<<endl;
		for(int z=1;z<=10;z+=1)
		{
			r=z*n;
			cout<<n<<("x")<<z<<("=")<<r<<endl;
		}
	}
	system("PAUSE");
}
