//22. Leer un número entero de tres dígitos y determinar si el primer dígito es igual al último.
//Jhon Murillo Ficha: 1752634
#include<iostream>
#include<cstdlib>
using namespace std;

int main ()
{
	int(cls);
	int num, pd, ud;
	cout<<("Digite numero entero de tres digitos.")<<endl;
	cin>>num;
	
	if(num>=100 and num<=999)
	{
		pd=num/100;
		ud=num-(num/10)*10;
		if(pd==ud)
		{
			cout<<("El primer y ultimo digito son iguales.")<<endl;
		}
		else
		{
			cout<<("No son iguales el primer y ultimo digito.")<<endl;
		}
	}
	else
	{
		cout<<("El numero no es de tres digitos.")<<endl;
	}
	system("PAUSE");
}
