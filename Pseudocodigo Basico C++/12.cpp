//12. Leer dos números enteros de dos dígitos y determinar si tienen dígitos comunes.
//Jhon Murillo Ficha: 1752634
#include<iostream>
#include<cstdlib>
using namespace std;

int main ()
{
	int(cls);
	int num1, num2, pd1, pd2, ud1, ud2;
	cout<<("Digite primer numero entero de dos digitos.")<<endl;
	cin>>num1;
	cout<<("Digite segundo numero entero de dos digitos.")<<endl;
	cin>>num2;
	if(num1>=10 and num1<=99 and num2>=10 and num2<=99)
	{
		pd1=num1/10;
		pd2=num2/10;
		ud1=num1-(num1/10)*10;
		ud2=num2-(num2/10)*10;
		
		if(pd1==pd2 or pd1==ud2 or ud1==pd2 or ud1==ud2)
		{
			cout<<("Tienen digitos comunes.")<<endl;
		}
		else
		{
			cout<<("No tienen ningun digito en comun.")<<endl;
		}
	}
	else
	{
		cout<<("El numero no es de dos digitos.")<<endl;
	}
	system("PAUSE");
}
