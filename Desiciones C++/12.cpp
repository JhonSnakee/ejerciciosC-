//12. Desarrolle un algoritmo que permita leer tres valores y almacenarlos en las variables A, B y C respectivamente. 
//El algoritmo debe imprimir cual es el mayor y cual es el menor. Recuerde constatar que los tres valores introducidos por el teclado sean 
//valores distintos. Presente un mensaje de alerta en caso de que se detecte la introducción de valores iguales.
//Jhon Murillo Ficha: 1752634
#include<iostream>
#include<cstdlib>
using namespace std;

int main ()
{
	int(cls);
	int A, B, C;
	cout<<("Digite los 3 valores.")<<endl;
	cin>>A>>B>>C;
	if(A==B or B==A or A==C or C==A or B==C or C==B)
	{
		cout<<("Los Valores no pueden ser iguales, Digite valores distintos.")<<endl;
	}
	else
	{
		if(A>B and B>C)
		{
			cout<<("El mayor es : ")<<A<<(" y el menor es : ")<<C<<endl;
		}
		else
		{
			if(A>C and C>B)
			{
				cout<<("El mayor es : ")<<A<<(" y el menor es : ")<<B<<endl;
			}
			else
			{
				if(B>A and A>C)
				{
					cout<<("El mayor es : ")<<B<<(" y el menor es : ")<<C<<endl;
				}
				else
				{
					if(B>C and C>A)
					{
						cout<<("El mayor es : ")<<B<<(" y el menor es : ")<<A<<endl;
					}
					else
					{
						if(C>A and A>B)
						{
							cout<<("El mayor es : ")<<C<<(" y el menor es : ")<<B<<endl;
						}
						else
						{
							if(C>B and B>A)
							{
								cout<<("El mayor es : ")<<C<<(" y el menor es : ")<<A<<endl;
							}
							else
							{
								cout<<("Los datos ingresados no son validos.")<<endl;
							}
						}
					}
				}
			}
		}
	}
	system("PAUSE");
}

