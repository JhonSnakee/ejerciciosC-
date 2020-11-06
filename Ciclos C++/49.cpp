//49. Utilizando ciclos anidados generar las siguientes ternas de números
//1 1 1
//2 1 2
//3 1 3
//4 2 1
//5 2 2
//6 2 3
//7 3 1
//8 3 2
//9 3 3
//Jhon Murillo Ficha: 1752634
#include<iostream>
#include<cstdlib>
using namespace std;

int main ()
{
	int(cls);
	int p, q, n;
	p=1;
	for(int q=1;q<=3;q+=1)
	{
		for(int n=1;n<=3;n+=1)
		{
			cout<<p<<(" ")<<q<<(" ")<<n<<endl;
			p=p+1;
		}
	}
	system("PAUSE");
}
