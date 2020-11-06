//M3. Leer una matriz 3x4 entera y determinar en qué posiciones exactas se encuentran los números pares.
//Jhon Murillo Ficha: 1752634
#include<iostream>
#include<cstdlib>
using namespace std;

int main ()
{
	int(cls);
	int f, c, NM, NF, NC;
	int M[3][4];
	cout<<("Digite 12 numeros enteros.")<<endl;
	for(int f=0;f<=2;f+=1)
	{
		for(int c=0;c<=3;c+=1)
		{
			cin>>M[f][c];
		}
	}
	cout<<(" ")<<endl;
	cout<<("El numero par esta en : ")<<endl;
	cout<<("Fila   ")<<("Columna")<<endl;
	for(int f=0;f<=2;f+=1)
	{
		for(int c=0;c<=3;c+=1)
		{
			if(M[f][c]%2==0)
			{
				NM=M[f][c];
				NF=f;
				NC=c;
				cout<<(" ")<<NF+1<<("   -    ")<<NC+1<<endl;
			}
		}
	}
	system("PAUSE");
}
