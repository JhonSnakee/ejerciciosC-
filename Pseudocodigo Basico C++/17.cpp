//17. Leer un número entero de tres dígitos y determinar en qué posición está el mayor dígito.
//Jhon Murillo Ficha: 1752634
#include<iostream>
#include<cstdlib>
using namespace std;

int main ()
{
	int(cls);
	int num, d1, d2, d3, da;
	cout<<("Digite numero entero de tres digitos")<<endl;
	cin>>num;
	
	if(num>=100 and num<=999)
	{
		d1=num/100;
		da=num/10;
		d2=da-(da/10)*10;
		d3=num-(num/10)*10;
		
		if(d1>d2 and d1>d3)
		{
			cout<<("El primer digito es mayor.")<<endl;
		}
		else
		{
			if(d2>d1 and d2>d3)
			{
				cout<<("El segundo digito es mayor.")<<endl;
			}
			else
			{
				if(d3>d2 and d3>d1)
				{
					cout<<("El tercer digito es mayor.")<<endl;
				}
				else
				{
					cout<<("Todos los digitos son iguales.")<<endl;
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
