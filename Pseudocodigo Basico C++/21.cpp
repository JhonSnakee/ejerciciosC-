//21. Leer tres números enteros de dos dígitos cada uno y determinar en cuál de ellos se encuentra el mayor dígito.
//Jhon Murillo Ficha: 1752634
#include<iostream>
#include<cstdlib>
using namespace std;

int main ()
{
	int(cls);
	int num1, num2, num3, pd1, ud1, pd2, ud2, pd3, ud3, z, n;
	cout<<("Digite primer numero entero de dos digitos.")<<endl;
	cin>>num1;
	cout<<("Digite segundo numero entero de dos digitos.")<<endl;
	cin>>num2;
	cout<<("Digite tercer numero entero de dos digitos.")<<endl;
	cin>>num3;
	
	if(num1<0)
	{
		num1=num1*(-1);
	}
	if(num2<0)
	{
		num2=num2*(-1);
	}
	if(num3<0)
	{
		num3=num3*(-1);
	}
	if(num1>=10 and num1<=99 and num2>=10 and num2<=99 and num3>=10 and num3<=99)
	{
		pd1=num1/10;
		pd2=num2/10;
		pd3=num3/10;
		ud1=num1-(num1/10)*10;
		ud2=num2-(num2/10)*10;
		ud3=num3-(num3/10)*10;
		
		if(pd1>ud1)
		{
			z=pd1;
			n=num1;
		}
		else
		{
			z=ud1;
			n=num1;
		}
		if(pd2>z)
		{
			z=pd2;
			n=num2;
		}
		else
		{
			if(ud2>z)
			{
				z=ud2;
				n=num2;
			}
			else
			{
				z=z;
				n=n;
			}
		}
		if(pd3>z)
		{
			z=pd3;
			n=num3;
		}
		else
		{
			if(ud3>z)
			{
				z=ud3;
				n=num3;
			}
			else
			{
				z=z;
				n=n;
			}
		}
		cout<<("El mayor digito se encuentra en : ")<<n<<endl;
	}
	else
	{
		cout<<("Algun numero no es de dos digitos.")<<endl;
	}
	system("PAUSE");
}
