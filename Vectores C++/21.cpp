//V21. Leer 10 n�meros enteros, almacenarlos en un vector y determinar en qu� posici�n est� el n�mero cuya suma de d�gitos sea la mayor.
//Jhon Murillo Ficha: 1752634
#include<iostream>
#include<cstdlib>
using namespace std;

int main ()
{
	int(cls);
	int i, D1, D2, SD, COM, DT;
	int V[10];
	cout<<("Digite 10 numeros enteros.")<<endl;
	for(int i=0;i<=9;i+=1)
	{
		cin>>V[i];
	}
	COM=0;
	for(int i=0;i<=9;i+=1)
	{
		D1=V[i]/10;
		D2=V[i]-(V[i]/10)*10;
		SD=D1+D2;
		if(SD>=COM)
		{
			DT=i;
			COM=SD;
		}
	}
	cout<<("El numero cuya suma de digitos es mayor esta en la posicion : ")<<DT+1<<endl;
	system("PAUSE");
}
