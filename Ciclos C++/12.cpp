//12. Leer un número entero de 3 dígitos y determinar si tiene el dígito 1.
//Jhon Murillo Ficha: 1752634
#include<iostream>
#include<cstdlib>
using namespace std;

int main ()
{
	int(cls);
	int num, d1, d2, d3, da;
	cout<<("Digite un numero entero de tres digitos.")<<endl;
	cin>>num;
	if(num>=100 and num<=999)
	{
		d1=num/100;
		da=num/10;
		d2=da-(da/10)*10;
		d3=num-(num/10)*10;
		if(d1!=1 and d2!=1 and d3!=1)
		{
			cout<<("El numero digitado no tiene 1.")<<endl;
		}
		while(d1==1)
		{
			cout<<("El numero 1 esta en el digito 1.")<<endl;
			d1=d1+1;
		}
		while(d2==1)
		{
			cout<<("El numero 1 esta en el digito 2.")<<endl;
			d2=d2+1;
		}
		while(d3==1)
		{
			cout<<("El numero 1 esta en el digito 3.")<<endl;
			d3=d3+1;
		}
	}
	else
	{
		cout<<("El numero no tiene tres digitos.")<<endl;
	}
	system("PAUSE");
}
