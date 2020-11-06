//8. Elabore un programa en el que se lea una temperatura en Grados centígrados y se indique el equivalente en grados kelvin y Fahrenheit.
//Jhon Murillo Ficha: 1752634
#include<iostream>
#include<cstdlib>
using namespace std;

int main ()
{
	int(cls);
	double c, f, k;
	cout<<("Digite los grados centigrados.")<<endl;
	cin>>c;
	f=((c*9)/5)+32;
	k=c+273.15;
	cout<<("Grados Fahrenheit : ")<<f<<endl;
	cout<<("Grados kelvin : ")<<k<<endl;
	system("PAUSE");
}
