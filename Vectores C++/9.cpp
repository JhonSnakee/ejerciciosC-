//V9. Leer 10 números enteros, almacenarlos en un vector y determinar cuántas veces está repetido el mayor.
//Jhon Murillo Ficha: 1752634
#include<iostream>
#include<cstdlib>
using namespace std;

int main ()
{
	int(cls);
	int i, NM, cont;
	int V[10];
	cout<<("Digite 10 numeros enteros.")<<endl;
	for(int i=0;i<=9;i+=1)
	{
		cin>>V[i];
	}
	cont=0;
	NM=0;
	for(int i=0;i<=9;i+=1)
	{
		if(V[i]>=NM)
		{
			NM=V[i];
		}
	}
	for(int i=0;i<=9;i+=1)
	{
		if(V[i]==NM)
		{
			cont=cont+1;
		}
	}
	cout<<("El numero mayor se repite ")<<cont<<(" veces.")<<endl;
	system("PAUSE");
}
