//5. Dado un tiempo en minutos, calcular los días, horas y minutos que le corresponden.
//Jhon Murillo Ficha: 1752634
#include<iostream>
#include<cstdlib>
using namespace std;

int main ()
{
	int(cls);
	double min, hr, ds;
	cout<<("Digite los minutos.")<<endl;
	cin>>min;
	hr=(min*1)/60;
	ds=(min*1)/1440;
	cout<<("Los minutos digitados son : ")<<hr<<(" horas y ")<<ds<<(" dias.")<<endl;
	system("PAUSE");
}
