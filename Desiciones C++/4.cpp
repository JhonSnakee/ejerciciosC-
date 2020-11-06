//4. Dado un monto calcular el descuento considerando que por encima de 100 el descuento es el 10% y por debajo de 100 el descuento es el 2%.
//Jhon Murillo Ficha: 1752634
#include<iostream>
#include<cstdlib>
using namespace std;

int main ()
{
	int(cls);
	int m, d, mt;
	cout<<("Digite su monto.")<<endl;
	cin>>m;
	
	if(m>100)
	{
		d=(10*m)/100;
		mt=m-d;
	}
	else
	{
		if(m<100)
		{
			d=(2*m)/100;
			mt=m-d;
		}
		else
		{
			cout<<("No tiene descuento.")<<endl;
		}
	}
	cout<<("Su monto es : ")<<mt<<endl;
	system("PAUSE");
}
