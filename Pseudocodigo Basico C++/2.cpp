//2. leer un numero entero y determine si tiene 3 digitos.
//Jhon Murillo Ficha: 1752634
#include<iostream>
#include<cstdlib>
using namespace std;

int main ()
{
	int(cls);
	int num;
	cout<<("Digite un numero entero.")<<endl;
	cin>>num;
	
	if(num<0)
	{
		num=num*(-1);
	}
	
	if(num>= 100 and num <=999)
	{
		cout<<("El numero tiene tres digitos.")<<endl;
	}
	else
	{
		cout<<("El numero no cumple.")<<endl;
	}
	system("PAUSE");
}
