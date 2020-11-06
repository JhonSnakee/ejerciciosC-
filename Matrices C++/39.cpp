//M39. Leer dos matrices 4x6 enteras y determinar si el promedio de las “esquinas” de una matriz es igual al promedio de las “esquinas” de la otra matriz.
//Jhon Murillo Ficha: 1752634
#include<iostream>
#include<cstdlib>
using namespace std;

int main ()
{
	int(cls);
	int f, c, g, v, S1, S2;
	double Prom1, Prom2;
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
	S1=0;
	for(int f=0;f<=3;f+=1)
	{
		for(int c=0;c<=5;c+=1)
		{
			S1=(S1+M[f][c]);
			Prom1=(S1/((f+1)*(c+1)));
		}
	}
	S2=0;
	for(int g=0;g<=3;g+=1)
	{
		for(int v=0;v<=5;v+=1)
		{
			S2=(S2+D[g][v]);
			Prom2=(S2/((g+1)*(v+1)));
		}
	}
	if(Prom1==Prom2)
	{
		cout<<("Los promedios de las matrices son iguales : ")<<Prom1<<endl;
	}
	else
	{
		cout<<("Los promedios de las matrices no son iguales.")<<endl;
	}
	system("PAUSE");
}
