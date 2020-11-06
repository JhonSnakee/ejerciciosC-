//11. Leer un número entero de dos dígitos y mostrar en pantalla todos los enteros comprendidos entre un dígito y otro.
//Jhon Murillo Ficha: 1752634
#include<iostream>
#include<cstdlib>
using namespace std;

int main ()
{
	int(cls);
	int num, n, d1, d2;
	cout<<("Digite un numero entero de dos digitos.")<<endl;
	cin>>num;
	if(num>=10 and num<=99)
	{
		d1=num/10;
		d2=num-(num/10)*10;
		if(d1<d2)
		{
			do
			{
				cout<<d1<<endl;
				d1=d1+1;
			}
			while(d1<(d2+1));
		}
		else
		{
			do
			{
				cout<<d2<<endl;
				d2=d2+1;
			}
			while(d2<(d1+1));
		}
	}
	else
	{
		cout<<("El numero digitado no es de dos digitos.")<<endl;
	}
	system("PAUSE");
}
