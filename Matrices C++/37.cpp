//M37. Leer dos matrices 4x6 enteras y determinar si el número mayor de una matriz se encuentra en la misma posición exacta en la otra matriz.
//Jhon Murillo Ficha: 1752634
#include<iostream>
#include<cstdlib>
using namespace std;

int main ()
{
	int(cls);
	int f, c, g, v, NM, NM2, VM, GM, FM, CM;
	int M[4][6], D[4][6];
	cout<<("Digite 24 numeros enteros para la primera matriz.")<<endl;
	for(int f=0;f<=3;f+=1)
	{
		for(int c=0;c<=5;c+=1)
		{
			cin>>M[f][c];
		}
	}
	cout<<("Digite 24 numeros enteros para la segunda matriz.")<<endl;
	for(int g=0;g<=3;g+=1)
	{
		for(int v=0;v<=5;v+=1)
		{
			cin>>D[g][v];
		}
	}
	NM=0;
	for(int f=0;f<=3;f+=1)
	{
		for(int c=0;c<=5;c+=1)
		{
			if(M[f][c]>=NM)
			{
				NM=M[f][c];
				FM=f;
				CM=c;
			}
		}
	}
	NM2=0;
	for(int g=0;g<=3;g+=1)
	{
		for(int v=0;v<=5;v+=1)
		{
			if(D[g][v]>=NM2)
			{
				NM2=D[g][v];
				GM=g;
				VM=v;
			}
		}
	}
	if(FM==GM and CM==VM)
	{
		cout<<("Los numeros mayores coinciden en la fila: ")<<GM+1<<(" Y la columna : ")<<VM+1<<endl;
	}
	else
	{
		cout<<("Los numeros no coinciden.")<<endl;
	}
	system("PAUSE");
}
