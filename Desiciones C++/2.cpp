//2.A un trabajador le pagan según sus horas trabajadas y la tarifa está a un valor por hora.
//Si la cantidad de horas trabajadas es mayor a 40 horas, la tarifa por hora se incrementa en un 50% para las horas extras. 
//Calcular el salario del trabajador dadas las horas trabajadas y la tarifa.
//Jhon Murillo Ficha: 1752634
#include<iostream>
#include<cstdlib>
using namespace std;

int main ()
{
	int(cls);
	int Sal, Vh, Ex, Ht, SalTot, Hx;
	cout<<("Digite su salario mensual sin puntos ni comas.")<<endl;
	cin>>Sal;
	Vh=Sal/240;
	Ex=Vh/2;
	cout<<("Digite sus horas mensuales trabajadas incluyendo horas extra.")<<endl;
	cin>>Ht;
	
	if(Ht>240)
	{
		Ht=Ht-240;
		Hx=(Ex+Vh)*Ht;
		SalTot=Sal+Hx;
		cout<<("Su salario es : ")<<SalTot<<endl;
	}
	else
	{
		cout<<("Su salario es : ")<<Sal<<endl;
	}
	system("PAUSE");
}
