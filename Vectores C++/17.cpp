//V17. Leer 10 números enteros, almacenarlos en un vector y determinar cuántos números negativos hay.
//Jhon Murillo Ficha: 1752634
#include<iostream>
#include<cstdlib>
using namespace std;

int main ()
{
	int(cls);
	int i, n;
	int V[10];
	cout<<("Digite 10 numeros enteros.")<<endl;
	for(int i=0;i<=9;i+=1)
	{
		cin>>V[i];
	}
	n=0;
	for(int i=0;i<=9;i+=1)
	{
		if(V[i]<0)
		{
			n=n+1;
		}
	}
	cout<<("Hay ")<<n<<(" numeros negativos.")<<endl;
	system("PAUSE");
}
