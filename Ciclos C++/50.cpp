//50. Utilizando ciclos anidados generar las siguientes parejas de números
//0 1
//1 1
//2 1
//3 1
//4 2
//5 2
//6 2
//7 2
//Jhon Murillo Ficha: 1752634
#include<iostream>
#include<cstdlib>
using namespace std;

int main ()
{
	int(cls);
	int p, q, n;
	p=0;
	for(int q=1;q<=2;q+=1)
	{
		for(int n=1;n<=4;n+=1)
		{
			cout<<p<<(" ")<<q<<endl;
			p=p+1;
		}
	}
	system("PAUSE");
}
