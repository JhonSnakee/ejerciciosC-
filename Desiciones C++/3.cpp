//3. A un trabajador le descuentan de su sueldo el 10% si su sueldo es menor o igual a 1000, por encima de 1000 y hasta 2000 el 5% del adicional,
//y por encima de 2000 el 3% del adicional. Calcular el descuento y sueldo neto que recibe el trabajador dado su sueldo.
//Jhon Murillo Ficha: 1752634
#include<iostream>
#include<cstdlib>
using namespace std;

int main ()
{
	int(cls);
	int s, st, d;
	cout<<("Digite su sueldo")<<endl;
	cin>>s;
	
	if(s<=1000)
	{
		d=(10*s)/100;
		st=s-d;
	}
	else
	{
		if(s>1000 and s<=2000)
		{
			d=(5*s)/100;
			st=s-d;
		}
		else
		{
			if(s>2000)
			{
				d=(3*s)/100;
				st=s-d;	
			}
			else
			{
				cout<<("Digite su sueldo en numeros positivos y enteros.")<<endl;
			}
		}
	}
	cout<<("Su sueldo es : ")<<st<<endl;
	system("PAUSE");
}
