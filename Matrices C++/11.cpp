//M11. Leer una matriz 5x3 entera y determinar en qué columna está el menor número par.
//Jhon Murillo Ficha: 1752634
#include<iostream>
#include<cstdlib>
using namespace std;

int main ()
{
	int(cls);
	int f, c, NM, FM, CM;
	int M[5][3];
	cout<<("Digite 15 numeros enteros.")<<endl;
	for(int f=0;f<=4;f+=1)
	{
		for(int c=0;c<=2;c+=1)
		{
			cin>>M[f][c];
		}
	}
	NM=0;
	for(int f=0;f<=4;f+=1)
	{
		for(int c=0;c<=2;c+=1)
		{
			if(M[f][c]>=NM)
			{
				NM=M[f][c];
			}
		}
	}
	for(int f=0;f<=4;f+=1)
	{
		for(int c=0;c<=2;c+=1)
		{
			if(M[f][c]<=NM and M[f][c]%2==0)
			{
				NM=M[f][c];
				FM=f;
				CM=c;
			}
		}
	}
	if(NM%2==0)
	{
		cout<<("El menor par es : ")<<NM<<(" y esta en la columna : ")<<CM+1<<endl;
	}
	else
	{
		cout<<("No hay numeros pares")<<endl;
	}
	system("PAUSE");
}
