//4. Leer dos números y mostrar todos los enteros comprendidos entre ellos.
//Jhon Murillo Ficha: 1752634
#include<iostream>
#include<cstdlib>
using namespace std;

int main ()
{
	int(cls);
	int z, x;
	cout<<("Digite dos numeros enteros.")<<endl;
	cin>>z>>x;
	if(z<x)
	{
		for(int z=z;z<=x;z+=1)
		{
			cout<<z<<endl;
		}
	}
	else
	{
		for(int x=x;x<=z;x+=1)
		{
			cout<<x<<endl;
		}
	}
	system("PAUSE");
}
