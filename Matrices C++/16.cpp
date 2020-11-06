//M16. Leer una matriz 5x4 entera y determinar cuántos números almacenados en ella tienen un solo dígito.
//Jhon Murillo Ficha: 1752634
#include<iostream>
#include<cstdlib>
using namespace std;

int main ()
{
	int(cls);
	int f, c, Cont;
	int M[5][4];
	cout<<("Digite 20 numeros enteros.")<<endl;
	for(int f=0;f<=4;f+=1)
	{
		for(int c=0;c<=3;c+=1)
		{
			cin>>M[f][c];
		}
	}
	Cont=0;
	for(int f=0;f<=4;f+=1)
	{
		for(int c=0;c<=3;c+=1)
		{
			if(M[f][c]>=0 and M[f][c]<=9)
			{
				Cont=Cont+1;
			}
			else
			{
				if(M[f][c]<=0 and M[f][c]>=(-9))
				{
					Cont=Cont+1;
				}
			}
		}
	}
	cout<<("Hay ")<<Cont<<(" numeros con un solo digito.")<<endl;
	system("PAUSE");
}
