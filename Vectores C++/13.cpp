//V13. Leer 10 números enteros, almacenarlos en un vector y determinar si el promedio entero de estos datos está almacenado en el vector.
//Jhon Murillo Ficha: 1752634
#include<iostream>
#include<cstdlib>
using namespace std;

int main ()
{
	int(cls);
	double prom;
	int i, suma, cont;
	int V[10];
	cout<<("Digite 10 numeros enteros.")<<endl;
	for(int i=0;i<=9;i+=1)
	{
		cin>>V[i];
	}
	suma=0;
	for(int i=0;i<=9;i+=1)
	{
		suma=(suma+V[i]);
		prom=(suma/(i+1));
	}
	cont=0;
	for(int i=0;i<=9;i+=1)
	{
		if(V[i]==prom)
		{
			cout<<("El promedio esta almacenado en : ")<<i+1<<endl;
		}
		else
		{
			cont=cont+1;
			if(cont==10)
			{
				cout<<("El promedio no esta almacenado en el vector")<<endl;
			}
		}
	}
	system("PAUSE");
}
