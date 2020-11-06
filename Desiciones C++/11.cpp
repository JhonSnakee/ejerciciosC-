//11. Desarrolle un algoritmo que permita leer y convertir calificaciones numéricas, según la siguiente tabla:
//A = 19 y 20, B =16, 17 y 18, C = 13, 14 y 15, D = 10, 11 y 12, E =  1 hasta el 9. Se asume que la nota está comprendida entre 1 y 20.
//Jhon Murillo Ficha: 1752634
#include<iostream>
#include<cstdlib>
using namespace std;

int main ()
{
	int(cls);
	double n;
	cout<<("Digita la nota de 1 a 20.")<<endl;
	cin>>n;
	
	if(n>=19 and n<=20)
	{
		cout<<("Su nota es A.")<<endl;
	}
	else
	{
		if(n>=16 and n<=18)
		{
			cout<<("Su nota es B.")<<endl;
		}
		else
		{
			if(n>=13 and n<=15)
			{
				cout<<("Su nota es C.")<<endl;
			}
			else
			{
				if(n>=10 and n<=12)
				{
					cout<<("Su nota es D.")<<endl;
				}
				else
				{
					if(n>=1 and n<=9)
					{
						cout<<("Su nota es E.")<<endl;
					}
					else
					{
						cout<<("Los datos ingresados no son validos.")<<endl;
					}
				}
			}
		}
	}
	system("PAUSE");
}
