//15. Leer un n�mero entero de tres d�gitos y determinar a cu�nto es igual la suma de sus d�gitos.
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
