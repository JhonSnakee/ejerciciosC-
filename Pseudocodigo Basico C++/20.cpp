//20. Leer tres números enteros y mostrarlos ascendentemente.
//Jhon Murillo Ficha: 1752634
#include<iostream>
#include<cstdlib>
using namespace std;

int main ()
{
	int(cls);
	int num1, num2, num3;
	cout<<("Digite primer numero entero.")<<endl;
	cin>>num1;
	cout<<("Digite segundo numero entero.")<<endl;
	cin>>num2;
	cout<<("Digite tercer numero entero.")<<endl;
	cin>>num3;
	
	if(num1<num2 and num2<num3)
	{
		cout<<("El orden es : ")<<num1<<(", ")<<num2<<(", ")<<num3<<endl;
	}
	else
	{
		if(num1<num3 and num3<num2)
		{
			cout<<("El orden es : ")<<num1<<(", ")<<num3<<(", ")<<num2<<endl;
		}
		else
		{
			if(num2<num1 and num1<num3)
			{
				cout<<("El orden es : ")<<num2<<(", ")<<num1<<(", ")<<num3<<endl;
			}
			else
			{
				if(num2<num3 and num3<num1)
				{
					cout<<("El orden es : ")<<num2<<(", ")<<num3<<(", ")<<num1<<endl;
				}
				else
				{
					if(num3<num1 and num1<num2)
					{
						cout<<("El orden es : ")<<num3<<(", ")<<num1<<(", ")<<num2<<endl;
					}
					else
					{
						if(num3<num2 and num2<num1)
						{
							cout<<("El orden es : ")<<num3<<(", ")<<num2<<(", ")<<num1<<endl;
						}
						else
						{
							cout<<("Todos los numeros son iguales.")<<endl;
						}
					}
				}
			}
		}
	}
	system("PAUSE");
}
