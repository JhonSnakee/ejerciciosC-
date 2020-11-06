//V12. Leer 10 números enteros, almacenarlos en un vector y determinar a cuánto es igual el promedio entero de los datos del vector.
//Jhon Murillo Ficha: 1752634
#include<iostream>
#include<cstdlib>
using namespace std;

int main ()
{
	int(cls);
	double prom;
	int i, suma;
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
	cout<<("El promedio es : ")<<prom<<endl;
	system("PAUSE");
}
