//11.leer dos numeros enteros y determinar cual es mayor.
// Jhon Murillo Ficha: 1752634
#include<iostream>
#include<cstdlib>
using namespace std;

int main ()
{
	int(cls);
	int num1, num2;
	cout<<("Digite primer numero entero.")<<endl;
	cin>>num1;
	cout<<("Digite segundo numero entero.")<<endl;
	cin>>num2;
	
	if(num1>num2)
	{
		cout<<("El mayor es : ")<<num1<<endl;
	}
	else
	{
		if(num2>num1)
		{
			cout<<("El mayor es : ")<<num2<<endl;
		}
		else
		{
			cout<<("Son Iguales.")<<endl;
		}
	}
	system("PAUSE");
}
