//V1. Leer 10 enteros, almacenarlos en un vector y determinar en qu� posici�n del vector est� el mayor n�mero le�do.
//Jhon Murillo Ficha: 1752634
#include<iostream>
#include<cstdlib>
using namespace std;

int main ()
{
	int(cls);
	int i, pm;
	int V[10];
	cout<<("Digite 10 numeros enteros.")<<endl;
	for(int i=0;i<=9;i+=1)
	{
		cin>>V[i];
	}
	pm=1;
	for(int i=0;i<=9;i+=1)
	{
		if(V[i]>=V[pm])
		{
			pm=i;
		}
	}
	cout<<("El numero mayor esta en la posicion : ")<<pm+1<<endl;
	system("PAUSE");
}
