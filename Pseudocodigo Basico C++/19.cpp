//19. Leer tres números enteros y determinar cuál es el mayor. Usar solamente dos variables.
//Jhon Murillo Ficha: 1752634
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
		cout<<("Digite el tercer numero entero.")<<endl;
		cin>>num2;
		if(num1>num2)
		{
			cout<<("El mayor es : ")<<num1<<endl;
		}
		else
		{
			cout<<("El mayor es : ")<<num2<<endl;
		}
	}
	else
	{
		cout<<("Digite el tercer numero entero.")<<endl;
		cin>>num1;
		if(num2>num1)
		{
			cout<<("El mayor es : ")<<num2<<endl;
		}
		else
		{
			cout<<("El mayor es : ")<<num1<<endl;
		}
	}
	system("PAUSE");
}
