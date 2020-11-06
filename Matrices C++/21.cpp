//M21. Leer dos matrices 4x5 enteras y determinar cuántos datos tienen en común.
//Jhon Murillo Ficha: 1752634
#include<iostream>
#include<cstdlib>
using namespace std;

int main ()
{
	int(cls);
	int f, c, g, v, Cont;
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
	Cont=0;
	for(int f=0;f<=3;f+=1)
	{
		for(int c=0;c<=4;c+=1)
		{
			for(int g=0;g<=3;g+=1)
			{
				for(int v=0;v<=4;v+=1)
				{
					if(M[f][c]==D[g][v])
					{
						Cont=Cont+1;
					}
				}
			}
		}
	}
	if(Cont==0)
	{
		cout<<("No tienen datos en comun.")<<endl;
	}
	else
	{
		cout<<("Numeros en comun : ")<<Cont<<endl;
	}
	system("PAUSE");
}
