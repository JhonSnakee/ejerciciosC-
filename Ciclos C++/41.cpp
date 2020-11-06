//41. Determinar a cuánto es igual la suma de los elementos de la serie de Fibonacci entre 0 y 100.
//Jhon Murillo Ficha: 1752634
#include<iostream>
#include<cstdlib>
using namespace std;

int main ()
{
	int(cls);
	int a, s, p;
	a=0;
	s=1;
	p=0;
	while(s<=100)
	{
		cout<<a<<endl;
		cout<<s<<endl;
		p=(s+a)+p;
		a=a+s;
		s=s+a;
	}
	cout<<("La suma total es : ")<<p<<endl;
	system("PAUSE");
}
