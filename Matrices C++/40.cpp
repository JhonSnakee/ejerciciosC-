//M40. Leer dos matrices 5x5 enteras y determinar si el promedio entero de los elementos de la diagonal de una matriz es igual al promedio de los elementos de la diagonal de la otra matriz.
//Jhon Murillo Ficha: 1752634
#include<iostream>
#include<cstdlib>
using namespace std;

int main ()
{
	int(cls);
	int f, c, g, v, Diag;
	double Prom1, Prom2;
	int M[5][5], D[5][5];
	cout<<("Digite 25 numeros enteros para la primera matriz.")<<endl;
	for(int f=0;f<=4;f+=1)
	{
		for(int c=0;c<=4;c+=1)
		{
			cin>>M[f][c];
		}
	}
	cout<<("Digite 25 numeros enteros para la segunda matriz.")<<endl;
	for(int g=0;g<=4;g+=1)
	{
		for(int v=0;v<=4;v+=1)
		{
			cin>>D[g][v];
		}
	}
	Diag=0;
		for(int f=0;f<=4;f+=1)
	{
		for(int c=0;c<=4;c+=1)
		{
			Diag=Diag+M[f][c];
			f=f+1;
			Prom1=Diag/(c+1);
		}
	}
	Diag=0;
	for(int g=0;g<=4;g+=1)
	{
		for(int v=0;v<=4;v+=1)
		{
			Diag=Diag+D[g][v];
			g=g+1;
			Prom2=Diag/(v+1);
		}
	}
	if(Prom1==Prom2)
	{
		cout<<("Los promedios de las diagonales son iguales : ")<<Prom1<<endl;
	}
	else
	{
		cout<<("No son iguales los promedios de las diagonales.")<<endl;
	}
	system("PAUSE");
}
