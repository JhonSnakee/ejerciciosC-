//48. Utilizando ciclos anidados generar las siguientes parejas de enteros.
//0 1
//1 1
//2 2
//3 2
//4 3
//5 3
//6 4
//7 4
//8 5
//9 5
//Jhon Murillo Ficha: 1752634
#include<iostream>
#include<cstdlib>
using namespace std;

int main ()
{
	int(cls);
	int p, q, n;
	p=0;
	for(int q=1;q<=5;q+=1)
	{
		for(int n=1;n<=2;n+=1)
		{
			cout<<p<<(" ")<<q<<endl;
			p=p+1;
		}
	}
	system("PAUSE");
}
