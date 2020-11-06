//V19. Leer 10 números enteros, almacenarlos en un vector y determinar cuál es el número menor.
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
	pm=V[0];
	for(int i=0;i<=9;i+=1)
	{
		if(V[i]<=pm)
		{
			pm=V[i];
		}
	}
	cout<<("El numero menor es : ")<<pm<<endl;
	system("PAUSE");
}
