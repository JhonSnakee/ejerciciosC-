//V11. Leer 10 n�meros enteros, almacenarlos en un vector y determinar cu�ntos n�meros tienen, de los almacenados all�, tienen menos de 3 d�gitos.
//Jhon Murillo Ficha: 1752634
#include<iostream>
#include<cstdlib>
using namespace std;

int main ()
{
	int(cls);
	int i, cont;
	int V[10];
	cout<<("Digite 10 numeros enteros.")<<endl;
	for(int i=0;i<=9;i+=1)
	{
		cin>>V[i];
	}
	cont=0;
	for(int i=0;i<=9;i+=1)
	{
		if(V[i]<=99)
		{
			cont=cont+1;
		}
	}
	cout<<("Numeros que tienen menos de 3 digitos : ")<<cont<<endl;
	system("PAUSE");
}
