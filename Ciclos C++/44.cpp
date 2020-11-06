//44. Leer un número y calcularle su factorial.
//Jhon Murillo Ficha: 1752634
#include<iostream>
#include<cstdlib>
using namespace std;

int main ()
{
	int(cls);
	double num, facto, cont;
	cout<<("Digite un numero positivo.")<<endl;
	cin>>num;
	if(num<0)
	{
		cout<<("No puede ser un numero negativo.")<<endl;
	}
	else
	{
		if(num==0)
		{
			cout<<("El factorial de 0 es : 0.")<<endl;
		}
		else
		{
			if(num!=0)
			{
				facto=1;
				for(int cont=1;cont<=num;cont+=1)
				{
					facto=facto*cont;
				}
				cout<<("El factorial de ")<<num<<(" es : ")<<facto<<endl;
			}
		}
	}
	system("PAUSE");
}
