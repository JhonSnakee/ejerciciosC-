//M2. Leer una matriz 4x4 entera y determinar cuántas veces se repita en ella el número mayor.
//Jhon Murillo Ficha: 1752634
#include<iostream>
#include<cstdlib>
using namespace std;

int main ()
{
	int(cls);
	int f, c, NM, FM, CM, Cont;
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
	Cont=0;
	for(int f=0;f<=3;f+=1)
	{
		for(int c=0;c<=3;c+=1)
		{
			if(M[f][c]==NM)
			{
				Cont=Cont+1;
			}
		}
	}
	cout<<("El numero se repite : ")<<Cont<<(" Veces")<<endl;
	system("PAUSE");
}
