//13. leer dos números enteros de dos dígitos y determinar si la suma de los dos números origina un número par.
//Jhon Murillo Ficha: 1752634
#include<iostream>
#include<cstdlib>
using namespace std;

int main ()
{
	int(cls);
	int num1, num2, s;
	cout<<("Digite primer numero entero de dos digitos.")<<endl;
	cin>>num1;
	cout<<("Digite segundo numero entero de dos digitos.")<<endl;
	cin>>num2;
	if(num1>=10 and num1<=99 and num2>=10 and num2<=99)
	{
		s=num1+num2;
		if(s % 2==0)
		{
			cout<<("El resultado es : ")<<s<<(" Y es par")<<endl;
		}
		else
		{
			cout<<("No es Par.")<<endl;
		}
	}
	else
	{
		cout<<("El numero no es de dos digitos.")<<endl;
	}
	system("PAUSE");
}
