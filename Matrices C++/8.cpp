//M8. Leer una matriz 4x4 entera y determinar cuántos enteros terminados en 0 hay almacenados en ella.
//Jhon Murillo Ficha: 1752634
#include<iostream>
#include<cstdlib>
using namespace std;

int main ()
{
	int(cls);
	int f, c, Cont, Comp;
	int M[4][4];
	cout<<("Digite 16 numeros enteros.")<<endl;
	for(int f=0;f<=3;f+=1)
	{
		for(int c=0;c<=3;c+=1)
		{
			cin>>M[f][c];
		}
	}
	Cont=0;
	for(int f=0;f<=3;f+=1)
	{
		for(int c=0;c<=3;c+=1)
		{
			Comp=M[f][c]-(M[f][c]/10)*10;
			if(Comp==0)
			{
				Cont=Cont+1;
			}
		}
	}
	cout<<("Numeros enteros terminados en 0 : ")<<Cont<<endl;
	system("PAUSE");
}
