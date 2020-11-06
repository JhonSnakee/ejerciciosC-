//1. leer un numero entero y determinar si es un numero terminado en 4.
//Jhon Murillo Ficha: 1752634
#include<iostream>
#include<cstdlib>
using namespace std;

int main ()
{
	int(cls);
	int num, ud;
	cout<<("Digite numero entero.")<<endl;
	cin>>num;
	
	if(num<0)
	{
		num=num*(-1);
		ud=num-(num/10)*10;
		
		if(ud==4)
		{
			cout<<("Ultimo digito es 4.")<<endl;
		}
		else
		{
			cout<<("Ultimo digito no es 4.")<<endl;
		}
	}
	else
	{
		ud=num-(num/10)*10;
		if(ud==4)
		{
			cout<<("Ultimo digito es 4")<<endl;
		}
		else
		{
			cout<<("Ultimo digito no es 4")<<endl;
		}
	}
	system("PAUSE");
}
