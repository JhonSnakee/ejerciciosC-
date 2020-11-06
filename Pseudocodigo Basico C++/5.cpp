//5. leer un numero entero de dos digitos y determinar si ambos digitos son pares.
//Jhon Murillo Ficha: 1752634
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
		pd=(num/10);
		ud=num-(num/10)*10;
		if(pd % 2==0 and ud % 2==0)
		{
			cout<<("Ambos digitos son par.")<<endl;
		}
		else
		{
			cout<<("Algun digito no es par.")<<endl;
		}
	}
	else
	{
		cout<<("El numero no es de dos digitos.")<<endl;
	}
	system("PAUSE");
}
