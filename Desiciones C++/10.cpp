//10. Desarrolle un algoritmo que funcione como caja registradora.
//Jhon Murillo Ficha: 1752634
#include<iostream>
#include<cstdlib>
using namespace std;

int main ()
{
	int(cls);
	int dep, d;
	cout<<("Digite dinero existente, en caso de no haber digite 0.")<<endl;
	cin>>dep;
	do
	{
		cout<<("Si genera ganancia digite valor positivo, si genera perdida digite valor negativo.")<<endl;
		cin>>d;
		if(d<0)
		{
			d=(-1)*d;
			dep=dep-d;
		}
		else
		{
			dep=dep+d;
		}
		cout<<("El valor existente es : ")<<dep<<endl;
	}
	while (true);
	system("PAUSE");
}
