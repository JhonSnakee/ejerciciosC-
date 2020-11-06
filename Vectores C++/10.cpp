//V10. Leer 10 números enteros, almacenarlos en un vector y determinar en qué posiciones se encuentran los números con mas de 3 dígitos.
//Jhon Murillo Ficha: 1752634
#include<iostream>
#include<cstdlib>
using namespace std;

int main ()
{
	int(cls);
	int i, p;
	int V[10];
	cout<<("Digite 10 numeros enteros.")<<endl;
	for(int i=0;i<=9;i+=1)
	{
		cin>>V[i];
	}
	cout<<("Los numeros con mas de 3 dígitos estan en las posiciones : ")<<endl;
	for(int i=0;i<=9;i+=1)
	{
		if(V[i]>999)
		{
			p=i;
			cout<<p+1<<endl;
		}
	}
	system("PAUSE");
}
