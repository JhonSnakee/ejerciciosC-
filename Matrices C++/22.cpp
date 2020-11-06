//M22. Leer dos matrices 4x5 enteras y determinar si el número mayor almacenado en la primera está en la segunda.
//Jhon Murillo Ficha: 1752634
#include<iostream>
#include<cstdlib>
using namespace std;

int main ()
{
	int(cls);
	int f, c, g, v, Cont, NM, NM2;
	int M[4][5], D[4][5];
	cout<<("Digite 20 numeros enteros para la primera matriz.")<<endl;
	for(int f=0;f<=3;f+=1)
	{
		for(int c=0;c<=4;c+=1)
		{
			cin>>M[f][c];
		}
	}
	cout<<("Digite 20 numeros enteros para la segunda matriz.")<<endl;
	for(int g=0;g<=3;g+=1)
	{
		for(int v=0;v<=4;v+=1)
		{
			cin>>D[g][v];
		}
	}
	NM=0;
	for(int f=0;f<=3;f+=1)
	{
		for(int c=0;c<=4;c+=1)
		{
			if(M[f][c]>NM)
			{
				NM=M[f][c];
			}
		}
	}
	NM2=0;
	for(int g=0;g<=3;g+=1)
	{
		for(int v=0;v<=4;v+=1)
		{
			if(D[g][v]>NM2)
			{
				NM2=D[g][v];
			}
		}
	}
	if(NM==NM2)
	{
		cout<<("El numero mayor es : ")<<NM2<<(" Y esta almacenado en las dos matrices.")<<endl;
	}
	else
	{
		cout<<("No coinciden los numeros mayores.")<<endl;
	}
	system("PAUSE");
}
