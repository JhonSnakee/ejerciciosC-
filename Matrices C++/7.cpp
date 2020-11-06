//M7. Leer una matriz 4x4 entera y determinar en qué posiciones están los enteros terminados en 0.
//Jhon Murillo Ficha: 1752634
#include<iostream>
#include<cstdlib>
using namespace std;

int main ()
{
	int(cls);
	int f, c, Comp;
	int M[4][4];
	cout<<("Digite 16 numeros enteros.")<<endl;
	for(int f=0;f<=3;f+=1)
	{
		for(int c=0;c<=3;c+=1)
		{
			cin>>M[f][c];
		}
	}
	cout<<(" ")<<endl;
	cout<<("Los enteros terminado en cero esta en: ")<<endl;
	cout<<("Fila   ")<<("Columna")<<endl;
	for(int f=0;f<=3;f+=1)
	{
		for(int c=0;c<=3;c+=1)
		{
			Comp=M[f][c]-(M[f][c]/10)*10;
			if(Comp==0)
			{
				cout<<(" ")<<f+1<<("   -    ")<<c+1<<endl;
			}
		}
	}
	system("PAUSE");
}
