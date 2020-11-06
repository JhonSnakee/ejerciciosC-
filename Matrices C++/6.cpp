//M6. Leer una matriz 4x4 entera y calcular el promedio de los números mayores de cada fila.
//Jhon Murillo Ficha: 1752634
#include<iostream>
#include<cstdlib>
using namespace std;

int main ()
{
	int(cls);
	int f, c, SF, suma, Prom;
	int M[4][4], V[4];
	cout<<("Digite 16 numeros enteros.")<<endl;
	for(int f=0;f<=3;f+=1)
	{
		for(int c=0;c<=3;c+=1)
		{
			cin>>M[f][c];
		}
	}
	for(int f=0;f<=3;f+=1)
	{
		SF=0;
		for(int c=0;c<=3;c+=1)
		{
			SF=SF+M[f][c];
		}
		V[f]=SF;
	}
	suma=0;
	for(int f=0;f<=3;f+=1)
	{
		suma=suma+V[f];
		Prom=suma/(f+1);
	}
	cout<<("El promedio de los numeros mayores de cada fila es : ")<<Prom<<endl;
	system("PAUSE");
}
