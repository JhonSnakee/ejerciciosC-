//4. leer un numero entero de dos digitos y determinar a cuanto es iagual la suma de sus digitos.
//Jhon Murillo Ficha: 1752634
#include<iostream>
#include<cstdlib>
using namespace std;

int main ()
{
	int(cls);
	int num, pd, ud, s;
	cout<<("Digite numero entero de dos digitos")<<endl;
	cin>>num;
	
	if(num>=10 and num<=99)
	{
		ud=num-(num/10)*10;
		pd=(num/10);
		s=(ud+pd);
		cout<<("La suma de los digitos es : ")<<s<<endl;
	}
	else
	{
		cout<<("El numero debe ser de dos digitos.")<<endl;
	}
	system("PAUSE");
}
