//V8. Leer 10 números enteros, almacenarlos en un vector y determinar en qué posiciones se encuentran los números terminados en 4.
//Jhon Murillo Ficha: 1752634
#include<iostream>
#include<cstdlib>
using namespace std;

int main ()
{
	int(cls);
	int i, ud, p, cont;
	int V[10];
	cout<<("Digite 10 numeros enteros.")<<endl;
	for(int i=0;i<=9;i+=1)
	{
		cin>>V[i];
	}
	cout<<("Los numeros terminados en 4 estan en las posiciones : ")<<endl;
	cont=0;
	for(int i=0;i<=9;i+=1)
	{
		ud=V[i]-(V[i]/10)*10;
		if(ud==4 or ud==-4)
		{
			p=i;
			cont=cont+1;
			cout<<p+1<<endl;
		}
	}
	if(cont==0)
	{
		cout<<("No hay numeros terminados en 4.")<<endl;
	}
	system("PAUSE");
}
