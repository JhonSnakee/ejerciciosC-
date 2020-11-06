//10. leer un numero entero de dos digitos y determinar si los dos digitos son iguales.
// Jhon Murillo Ficha: 1752634
#include<iostream>
#include<cstdlib>
using namespace std;

int main ()
{
	int(cls);
	int num, pd, ud;
	cout<<("Digite numero entero de dos digitos.")<<endl;
	cin>>num;
	if(num>=10 and num<=99)
	{
		ud=num-(num/10)*10;
		pd=num/10;
		if(ud==pd)
		{
			cout<<("Los digitos son iguales.")<<endl;
		}
		else
		{
			cout<<("Los digitos no son iguales.")<<endl;
		}
	}
	else
	{
		cout<<("El numero no es de dos digitos.")<<endl;
	}
	system("PAUSE");
}
