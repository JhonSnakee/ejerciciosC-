//6. Se trata de escribir el algoritmo que permita emitir la factura correspondiente a una compra de un articulo determinado,
//del que se adquieren una o varias unidades. El IVA es del 19% y si el precio bruto ( precio venta mas IVA)
//es mayor de $13000 se debe realizar un descuento del 5%.
//Jhon Murillo Ficha: 1752634
#include<iostream>
#include<cstdlib>
using namespace std;

int main ()
{
	int(cls);
	double pa, pb, iva, dto;
	cout<<("Digite precio del articulo o articulos total.")<<endl;
	cin>>pa;
	iva=(19*pa)/100;
	pb=pa+iva;
	dto=(5*pb)/100;
	if(pb>13000)
	{
		pb=pb-dto;
	}
	else
	{
		cout<<("Este producto(s) no cuenta con descuento.")<<endl;
	}
	cout<<("El valor total es : ")<<pb<<endl;
	system("PAUSE");
}
