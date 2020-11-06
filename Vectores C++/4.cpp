//V4. Cargar un vector de 10 posiciones con los 10 primeros elementos de la serie de Fibonacci y mostrarlo en pantalla.
//Jhon Murillo Ficha: 1752634
#include<iostream>
#include<cstdlib>
using namespace std;

int main ()
{
	int(cls);
	int n1, n2, a, i;
	int V[10];
	V[0]=0;
	V[1]=1;
	n1=0;
	n2=1;
	for(int i=2;i<=9;i+=1)
	{
		a=n1+n2;
		n1=n2;
		n2=a;
		V[i]=a;
	}
	cout<<("Fibonacci")<<endl;
	for(int i=0;i<=9;i+=1)
	{
		cout<<V[i]<<endl;
	}
	system("PAUSE");
}
