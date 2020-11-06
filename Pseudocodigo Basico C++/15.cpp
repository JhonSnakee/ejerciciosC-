//15. Leer un número entero de tres dígitos y determinar a cuánto es igual la suma de sus dígitos.
//Jhon Murillo Ficha: 1752634
#include<iostream>
#include<cstdlib>
using namespace std;

int main ()
{
	int(cls);
	int num, d1, d2, d3, da, st;
	cout<<("Digite numero entero de tres digitos.")<<endl;
	cin>>num;
	
	if(num>=100 and num<=999)
	{
		d1=num/100;
		da=num/10;
		d2=da-(da/10)*10;
		d3=num-(num/10)*10;
		st=d1+d2+d3;
		cout<<("La suma de todos los digitos es : ")<<st<<endl;
	}
	else
	{
		cout<<("El numero no es de tres digitos.")<<endl;
	}
	system("PAUSE");
}
