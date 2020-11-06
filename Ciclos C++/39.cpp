//39. Se define la serie de Fibonacci como la serie que comienza con los dígitos 1 y 0 y va sumando progresivamente los dos últimos elementos
//de la serie, así: 0 1 1 2 3 5 8 13 21 34....... Utilizando el concepto de ciclo generar la serie de Fibonacci hasta llegar o sobrepasas
//el número 10000.
//Jhon Murillo Ficha: 1752634
#include<iostream>
#include<cstdlib>
using namespace std;

int main ()
{
	int(cls);
	int a, s;
	a=0;
	s=1;
	while(s<=15000)
	{
		cout<<a<<endl;
		cout<<s<<endl;
		a=a+s;
		s=a+s;
	}
	system("PAUSE");
}
