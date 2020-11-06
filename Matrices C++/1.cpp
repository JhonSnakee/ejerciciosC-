//M1. Leer una matriz 4x4 entera y determinar en qué fila y en qué columna se encuentra el número mayor.
//Jhon Murillo Ficha: 1752634
#include<iostream>
#include<cstdlib>
using namespace std;

int main ()
{
	int(cls);
	int f, c, NM, FM, CM;
	int M[4][4];
	cout<<("Digite 16 numeros enteros.")<<endl;
	for(int f=0;f<=3;f+=1)
	{
		for(int c=0;c<=3;c+=1)
		{
			cin>>M[f][c];
		}
	}
	NM=0;
	for(int f=0;f<=3;f+=1)
	{
		for(int c=0;c<=3;c+=1)
		{
			if(M[f][c]>NM)
			{
				NM=M[f][c];
				FM=f;
				CM=c;
			}
		}
	}
	cout<<("El mayor es : ")<<NM<<(" y esta en la fila : ")<<FM+1<<(" columna : ")<<CM+1<<endl;
	system("PAUSE");
}
