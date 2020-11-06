//M5. Leer una matriz 4x3 entera, calcular la suma de los elementos de cada fila y determinar cuál es la fila que tiene la mayor suma.
//Jhon Murillo Ficha: 1752634
#include<iostream>
#include<cstdlib>
using namespace std;

int main ()
{
	int(cls);
	int f, c, SF, MS, i;
	int M[4][3], V[4];
	cout<<("Digite 12 numeros enteros.")<<endl;
	for(int f=0;f<=3;f+=1)
	{
		for(int c=0;c<=2;c+=1)
		{
			cin>>M[f][c];
		}
	}
	for(int f=0;f<=3;f+=1)
	{
		SF=0;
		for(int c=0;c<=2;c+=1)
		{
			SF=SF+M[f][c];
		}
		V[f]=SF;
	}
	MS=0;
	i=0;
	for(int f=0;f<=3;f+=1)
	{
		if(V[f]>=MS)
		{
			MS=V[f];
			i=f;
		}
	}
	cout<<("El mayor suma esta en la fila : ")<<i+1<<endl;
}
