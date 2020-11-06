//16. Leer un número entero de tres dígitos y determinar si al menos dos de sus tres dígitos son iguales.
//Jhon Murillo Ficha: 1752634
#include<iostream>
#include<cstdlib>
using namespace std;

int main ()
{
	int(cls);
	int num, d1, d2, d3, da;
	cout<<("Digite numero entero de tres digitos.")<<endl;
	cin>>num;
	
	if(num>=100 and num<=999)
	{
		d1=num/100;
		da=num/10;
		d2=da-(da/10)*10;
		d3=num-(num/10)*10;
		
		if(d1==d2)
		{
			cout<<("Primer digito y segundo digito son iguales.")<<endl;
		}
		else
		{
			if(d1==d3)
			{
				cout<<("Primer digito y tercer digito son iguales.")<<endl;
			}
			else
			{
				if(d2==d3)
				{
					cout<<("Segundo digito y tercer digito son iguales.")<<endl;
				}
				else
				{
					cout<<("Ningun digito es igual.")<<endl;
				}
			}
		}
	}
	else
	{
		cout<<("El numero no es de tres digitos.")<<endl;
	}
	system("PAUSE");
}
