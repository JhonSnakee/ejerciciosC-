//MENU.
//JHON ALEJANDRO MURILLO DIAZ.
//Ficha: 1752634
#include<iostream>
#include<cmath>
#include<cstdlib>
#include <stdio.h>
#include <wchar.h>
#include <locale.h>
#include <stdlib.h>
using namespace std;

void fyc_num_mayor();
void num_rep_may();
void num_par();
void suma_filas();
void prom_suma_filas();
void pos_0();
void cont_0();
void fyc_num_mayor2();
void cont_1dig();
void cont_2mat_com();
void comp_2mat_mayor();
void comp_2mat_mayor2();
void comp_mat_pos_exact();
void comp_mat_prom();
void comp_mat_prom_diad();
void pos_mayor();
void pos_may_par();
void vec_fibonacci();
void pos_mayor2();
void num_term_4();
void pos_mayor_rep();
void pos_3_dig();
void pos_3_dig2();
void prom_vec();
void prom_vec_al();
void num_neg();
void num_menor();
void sum_dig_mayor();
void ent_1yx();
void nt_par_1yx();
void ent_xyx();
void ent_1y100();
void ent_par_20y200();
void ent_sum_1yx();
void ent_dig1ydig2();
void ent_3dig_1();
void tabla_multiplicacion_5();
void tablas_multi_1a10();
void tabla_mult_entero();
void serie_fibonacci();
void serie_suma_fibonacci();
void factorial_num();
void parejas_enteros();
void parejas_enteros2();
void parejas_numeros3();
void calcular_salario();
void calcular_salario_extras();
void descuento_sueldo();
void descuento_monto();
void minutos_a_horas_dias();
void articulo_ivaydescuento();
void promedio_notas();
void cakyf();
void hip_trianrec();
void caja_registradora();
void convertir_notas_numericas();
void mayor3variables();
void terminado_en_4();
void tres_digitos();
void numero_negativo();
void suma_digitos();
void digitos_par();
void digitos_iguales();
void numero_mayor();
void digitos_comunes();
void suma_igual_numero_par();
void suma_todos_digitos();
void suma_todos_tres_digitos();
void digitos_iguales_dos_minimo();
void pocision_mayor_digito();
void num_mayor_de_tres();
void orden_ascendente();
void mayor_digito_de_3_numeros();
void primer_digito_igual_ultimo_digito();
void matrices();
void vectores();
void ciclos();
void decisiones();
void sencillos();
//                    Menu Principal
int main()
{
	setlocale(LC_CTYPE, "Spanish");
	int op;
	do
	{
		system("cls");
		cout<<("==========================================")<<endl;
		cout<<("|                                        |")<<endl;
		cout<<("|     DESARROLLADO POR Jhon Murillo      |")<<endl;
		cout<<("|             Ficha: 1752634             |")<<endl;
		cout<<("|                                        |")<<endl;
		cout<<("==========================================")<<endl;
		cout<<("")<< endl;
		cout<<("Menu Principal.")<< endl;
		cout<<("")<< endl;
		cout<<("Elija una opcion")<< endl;
		cout<<("")<< endl;
		cout<<("   1. Sencillos")<< endl;
		cout<<("   2. Decisiones")<< endl;
		cout<<("   3. Ciclos")<< endl;
		cout<<("   4. Vectores")<< endl;
		cout<<("   5. Matrices")<< endl;
		cout<<("   6. Salir")<< endl;
		cout<<("")<< endl;
		cout<<("Opcion : ")<< endl;
		cin>>op;
		cout<<("")<< endl;
		switch (op) 
		{
			case 1:
				sencillos();
			break;
			case 2:
				decisiones();
			break;
			case 3:
				ciclos();
			break;
			case 4:
				vectores();
			break;
			case 5:
				matrices();
			break;
			case 6:
				cout << "Gracias, vuelva pronto" << endl;
			break;
			default:
				cout << "Opcion no valida" << endl;
			cout<<("")<< endl;
			cout << "Presione enter para continuar" << endl;
			cin.get(); 
		}
	}while (op!=6);
}
//                    Menu Sencillos
void sencillos()
{
	int op;
	do
	{
		system("cls");
		cout<<("Menu de Sencillos.")<< endl;
		cout<<("")<< endl;
		cout<<("Elija una opcion")<< endl;
		cout<<("")<< endl;
		cout << "   1.  Determinar si es un numero terminado en 4." << endl;
		cout << "   2.  Determinar si tiene 3 digitos." << endl;
		cout << "   3.  Determinar si es negativo." << endl;
		cout << "   4.  Determinar a cuanto es iagual la suma de sus digitos." << endl;
		cout << "   5.  Determinar si ambos digitos son pares" << endl;
		cout << "   6.  Determinar si los dos digitos son iguales." << endl;
		cout << "   7.  Determinar cual es mayor." << endl;
		cout << "   8.  Determinar si tienen dígitos comunes." << endl;
		cout << "   9.  Determinar si la suma de los dos números origina un número par." << endl;
		cout << "   10. Determinar a cuánto es igual la suma de todos los dígitos." << endl;
		cout << "   11. Determinar a cuánto es igual la suma de sus dígitos." << endl;
		cout << "   12. Determinar si al menos dos de sus tres dígitos son iguales." << endl;
		cout << "   13. Determinar en qué posición está el mayor dígito." << endl;
		cout << "   14. determinar cuál es el mayor. Usar solamente dos variables." << endl;
		cout << "   15. Mostrarlos ascendentemente" << endl;
		cout << "   16. determinar en cuál de ellos se encuentra el mayor dígito." << endl;
		cout << "   17. determinar si el primer dígito es igual al último." << endl;
		cout << " " << endl;
		cout << "   18. Salir" << endl;
		cout<<("")<< endl;
		cout<<("Opcion : ")<< endl;
		cin>>op;
		cout<<("")<< endl;
		switch (op) 
		{
			case 1:
				terminado_en_4();
			break;
			case 2:
				tres_digitos();
			break;
			case 3:
				numero_negativo();
			break;
			case 4:
				suma_digitos();
			break;
			case 5:
				digitos_par();
			break;
			case 6:
				digitos_iguales();
			break;
			case 7:
				numero_mayor();
			break;
			case 8:
				digitos_comunes();
			break;
			case 9:
				suma_igual_numero_par();
			break;
			case 10:
				suma_todos_digitos();
			break;
			case 11:
				suma_todos_tres_digitos();
			break;
			case 12:
				digitos_iguales_dos_minimo();
			break;
			case 13:
				pocision_mayor_digito();
			break;
			case 14:
				num_mayor_de_tres();
			break;
			case 15:
				orden_ascendente();
			break;
			case 16:
				mayor_digito_de_3_numeros();
			break;
			case 17:
				primer_digito_igual_ultimo_digito();
			break;
			case 18:
				cout << "Gracias, vuelva pronto" << endl;
			break;
			default:
				cout << "Opcion no valida" << endl;
			cout<<("")<< endl;
			cout << "Presione enter para continuar" << endl;
			cin.get(); 
		}
	}while(op!=18);
}
//1s
void terminado_en_4()
{
	system("cls");
	cout << "   1.  Determinar si es un numero terminado en 4." << endl;
	cout<<("")<< endl;
	int num, ud;
	cout<<("Digite numero entero.")<<endl;
	cin>>num;
	
	if(num<0)
	{
		num=num*(-1);
		ud=num-(num/10)*10;
		
		if(ud==4)
		{
			cout<<("Ultimo digito es 4.")<<endl;
		}
		else
		{
			cout<<("Ultimo digito no es 4.")<<endl;
		}
	}
	else
	{
		ud=num-(num/10)*10;
		if(ud==4)
		{
			cout<<("Ultimo digito es 4")<<endl;
		}
		else
		{
			cout<<("Ultimo digito no es 4")<<endl;
		}
	}
	system("PAUSE");
}
//2s
void tres_digitos()
{
	system("cls");
	cout << "   2.  Determinar si tiene 3 digitos." << endl;
	cout<<("")<< endl;
	int num;
	cout<<("Digite un numero entero.")<<endl;
	cin>>num;
	
	if(num<0)
	{
		num=num*(-1);
	}
	
	if(num>= 100 and num <=999)
	{
		cout<<("El numero tiene tres digitos.")<<endl;
	}
	else
	{
		cout<<("El numero no cumple.")<<endl;
	}
	system("PAUSE");
}
//3s
void numero_negativo()
{
	system("cls");
	cout << "   3.  Determinar si es negativo." << endl;
	cout<<("")<< endl;
	int num;
	cout<<("Digite numero entero.")<<endl;
	cin>>num;
	
	if(num<0)
	{
		cout<<("El numero es negativo.")<<endl;
	}
	else
	{
		cout<<("El numero es positivo")<<endl;
	}
	system("PAUSE");
}
//4s
void suma_digitos()
{
	system("cls");
	cout << "   4.  Determinar a cuanto es iagual la suma de sus digitos." << endl;
	cout<<("")<< endl;
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
//5s
void digitos_par()
{
	system("cls");
	cout << "   5.  Determinar si ambos digitos son pares" << endl;
	cout<<("")<< endl;
	int num, pd, ud;
	cout<<("Digite numero entero de dos digitos.")<<endl;
	cin>>num;
	
	if(num>=10 and num<=99)
	{
		pd=(num/10);
		ud=num-(num/10)*10;
		if(pd % 2==0 and ud % 2==0)
		{
			cout<<("Ambos digitos son par.")<<endl;
		}
		else
		{
			cout<<("Algun digito no es par.")<<endl;
		}
	}
	else
	{
		cout<<("El numero no es de dos digitos.")<<endl;
	}
	system("PAUSE");
}
//6s
void digitos_iguales()
{
	system("cls");
	cout << "   6.  Determinar si los dos digitos son iguales." << endl;
	cout<<("")<< endl;
	int num, pd, ud;
	cout<<("Digite numero entero de dos digitos.")<<endl;
	cin>>num;
	if(num>=10 and num<=99)
	{
		ud=num-(num/10)*10;
		pd=num/10;
		if(ud==pd)
		{
			cout<<("Los digitos son iguales.")<<endl;
		}
		else
		{
			cout<<("Los digitos no son iguales.")<<endl;
		}
	}
	else
	{
		cout<<("El numero no es de dos digitos.")<<endl;
	}
	system("PAUSE");
}
//7s
void numero_mayor()
{
	system("cls");
	cout << "   7.  Determinar cual es mayor." << endl;
	cout<<("")<< endl;
	int num1, num2;
	cout<<("Digite primer numero entero.")<<endl;
	cin>>num1;
	cout<<("Digite segundo numero entero.")<<endl;
	cin>>num2;
	
	if(num1>num2)
	{
		cout<<("El mayor es : ")<<num1<<endl;
	}
	else
	{
		if(num2>num1)
		{
			cout<<("El mayor es : ")<<num2<<endl;
		}
		else
		{
			cout<<("Son Iguales.")<<endl;
		}
	}
	system("PAUSE");
}
//8s
void digitos_comunes()
{
	system("cls");
	cout << "   8.  Determinar si tienen dígitos comunes." << endl;
	cout<<("")<< endl;
	int num1, num2, pd1, pd2, ud1, ud2;
	cout<<("Digite primer numero entero de dos digitos.")<<endl;
	cin>>num1;
	cout<<("Digite segundo numero entero de dos digitos.")<<endl;
	cin>>num2;
	if(num1>=10 and num1<=99 and num2>=10 and num2<=99)
	{
		pd1=num1/10;
		pd2=num2/10;
		ud1=num1-(num1/10)*10;
		ud2=num2-(num2/10)*10;
		
		if(pd1==pd2 or pd1==ud2 or ud1==pd2 or ud1==ud2)
		{
			cout<<("Tienen digitos comunes.")<<endl;
		}
		else
		{
			cout<<("No tienen ningun digito en comun.")<<endl;
		}
	}
	else
	{
		cout<<("El numero no es de dos digitos.")<<endl;
	}
	system("PAUSE");
}
//9s
void suma_igual_numero_par()
{
	system("cls");
	cout << "   9.  Determinar si la suma de los dos números origina un número par." << endl;
	cout<<("")<< endl;
	int num1, num2, s;
	cout<<("Digite primer numero entero de dos digitos.")<<endl;
	cin>>num1;
	cout<<("Digite segundo numero entero de dos digitos.")<<endl;
	cin>>num2;
	if(num1>=10 and num1<=99 and num2>=10 and num2<=99)
	{
		s=num1+num2;
		if(s % 2==0)
		{
			cout<<("El resultado es : ")<<s<<(" Y es par")<<endl;
		}
		else
		{
			cout<<("No es Par.")<<endl;
		}
	}
	else
	{
		cout<<("El numero no es de dos digitos.")<<endl;
	}
	system("PAUSE");
}
//10s
void suma_todos_digitos()
{
	system("cls");
	cout << "   10. Determinar a cuánto es igual la suma de todos los dígitos." << endl;
	cout<<("")<< endl;
	int num1, num2, pd1, ud1, pd2, ud2, st;
	cout<<("Digite primer numero entero de dos digitos.")<<endl;
	cin>>num1;
	cout<<("Digite segundo numero entero de dos digitos.")<<endl;
	cin>>num2;
	if(num1>=10 and num1<=99 and num2>=10 and num2<=99)
	{
		pd1=num1/10;
		pd2=num2/10;
		ud1=num1-(num1/10)*10;
		ud2=num2-(num2/10)*10;
		st=pd1+ud1+pd2+ud2;
		cout<<("La suma de todos los digitos es : ")<<st<<endl;
	}
	else
	{
		cout<<("El numero no es de dos digitos.")<<endl;
	}
	system("PAUSE");
}
//11s
void suma_todos_tres_digitos()
{
	system("cls");
	cout << "   11. Determinar a cuánto es igual la suma de sus dígitos." << endl;
	cout<<("")<< endl;
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
//12s
void digitos_iguales_dos_minimo()
{
	system("cls");
	cout << "   12. Determinar si al menos dos de sus tres dígitos son iguales." << endl;
	cout<<("")<< endl;
	int num, d1, d2, d3, da;
	cout<<("Digite numero entero de tres digitos.")<<endl;
	cin>>num;
	
	if(num>=100 and num<=999)
	{
		d1=num/100;
		da=num/10;
		d2=da-(da/10)*10;
		d3=num-(num/10)*10;
		
		if(d1==d2)
		{
			cout<<("Primer digito y segundo digito son iguales.")<<endl;
		}
		else
		{
			if(d1==d3)
			{
				cout<<("Primer digito y tercer digito son iguales.")<<endl;
			}
			else
			{
				if(d2==d3)
				{
					cout<<("Segundo digito y tercer digito son iguales.")<<endl;
				}
				else
				{
					cout<<("Ningun digito es igual.")<<endl;
				}
			}
		}
	}
	else
	{
		cout<<("El numero no es de tres digitos.")<<endl;
	}
	system("PAUSE");
}
//13s
void pocision_mayor_digito()
{
	system("cls");
	cout << "   13. Determinar en qué posición está el mayor dígito." << endl;
	cout<<("")<< endl;
	int num, d1, d2, d3, da;
	cout<<("Digite numero entero de tres digitos")<<endl;
	cin>>num;
	
	if(num>=100 and num<=999)
	{
		d1=num/100;
		da=num/10;
		d2=da-(da/10)*10;
		d3=num-(num/10)*10;
		
		if(d1>d2 and d1>d3)
		{
			cout<<("El primer digito es mayor.")<<endl;
		}
		else
		{
			if(d2>d1 and d2>d3)
			{
				cout<<("El segundo digito es mayor.")<<endl;
			}
			else
			{
				if(d3>d2 and d3>d1)
				{
					cout<<("El tercer digito es mayor.")<<endl;
				}
				else
				{
					cout<<("Todos los digitos son iguales.")<<endl;
				}
			}
		}
		
	}
	else
	{
		cout<<("El numero no es de tres digitos.")<<endl;
	}
	system("PAUSE");
}
//14s
void num_mayor_de_tres()
{
	system("cls");
	cout << "   14. determinar cuál es el mayor. Usar solamente dos variables." << endl;
	cout<<("")<< endl;
	int num1, num2;
	cout<<("Digite primer numero entero.")<<endl;
	cin>>num1;
	cout<<("Digite segundo numero entero.")<<endl;
	cin>>num2;
	
	if(num1>num2)
	{
		cout<<("Digite el tercer numero entero.")<<endl;
		cin>>num2;
		if(num1>num2)
		{
			cout<<("El mayor es : ")<<num1<<endl;
		}
		else
		{
			cout<<("El mayor es : ")<<num2<<endl;
		}
	}
	else
	{
		cout<<("Digite el tercer numero entero.")<<endl;
		cin>>num1;
		if(num2>num1)
		{
			cout<<("El mayor es : ")<<num2<<endl;
		}
		else
		{
			cout<<("El mayor es : ")<<num1<<endl;
		}
	}
	system("PAUSE");
}
//15s
void orden_ascendente()
{
	system("cls");
	cout << "   15. Mostrarlos ascendentemente" << endl;
	cout<<("")<< endl;
	int num1, num2, num3;
	cout<<("Digite primer numero entero.")<<endl;
	cin>>num1;
	cout<<("Digite segundo numero entero.")<<endl;
	cin>>num2;
	cout<<("Digite tercer numero entero.")<<endl;
	cin>>num3;
	
	if(num1<num2 and num2<num3)
	{
		cout<<("El orden es : ")<<num1<<(", ")<<num2<<(", ")<<num3<<endl;
	}
	else
	{
		if(num1<num3 and num3<num2)
		{
			cout<<("El orden es : ")<<num1<<(", ")<<num3<<(", ")<<num2<<endl;
		}
		else
		{
			if(num2<num1 and num1<num3)
			{
				cout<<("El orden es : ")<<num2<<(", ")<<num1<<(", ")<<num3<<endl;
			}
			else
			{
				if(num2<num3 and num3<num1)
				{
					cout<<("El orden es : ")<<num2<<(", ")<<num3<<(", ")<<num1<<endl;
				}
				else
				{
					if(num3<num1 and num1<num2)
					{
						cout<<("El orden es : ")<<num3<<(", ")<<num1<<(", ")<<num2<<endl;
					}
					else
					{
						if(num3<num2 and num2<num1)
						{
							cout<<("El orden es : ")<<num3<<(", ")<<num2<<(", ")<<num1<<endl;
						}
						else
						{
							cout<<("Todos los numeros son iguales.")<<endl;
						}
					}
				}
			}
		}
	}
	system("PAUSE");
}
//16s
void mayor_digito_de_3_numeros()
{
	system("cls");
	cout << "   16. determinar en cuál de ellos se encuentra el mayor dígito." << endl;
	cout<<("")<< endl;
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
//17
void primer_digito_igual_ultimo_digito()
{
	system("cls");
	cout << "   17. determinar si el primer dígito es igual al último." << endl;
	cout<<("")<< endl;
	int num, pd, ud;
	cout<<("Digite numero entero de tres digitos.")<<endl;
	cin>>num;
	
	if(num>=100 and num<=999)
	{
		pd=num/100;
		ud=num-(num/10)*10;
		if(pd==ud)
		{
			cout<<("El primer y ultimo digito son iguales.")<<endl;
		}
		else
		{
			cout<<("No son iguales el primer y ultimo digito.")<<endl;
		}
	}
	else
	{
		cout<<("El numero no es de tres digitos.")<<endl;
	}
	system("PAUSE");
}
//                    Menu decisiones
void decisiones()
{
	int op;
	do
	{
		system("cls");
		cout<<("Menu De decisiones.")<< endl;
		cout<<("")<< endl;
		cout<<("Elija una opcion")<< endl;
		cout<<("")<< endl;
		cout << "   1.  Calcular su salario e imprimirlo." << endl;
		cout << "   2.  Calcular el salario del trabajador dadas las horas trabajadas y la tarifa." << endl;
		cout << "   3.  Calcular el descuento y sueldo neto que recibe el trabajador dado su sueldo." << endl;
		cout << "   4.  Calcular el descuento 10% y 2%." << endl;
		cout << "   5.  Calcular los días, horas y minutos." << endl;
		cout << "   6.  Factura correspondiente a una compra de un articulo determinado." << endl;
		cout << "   7.  Calcular promedio de cuatro notas." << endl;
		cout << "   8.  Calcular los kelvin y Fahrenheit segun centigrados." << endl;
		cout << "   9.  Determinar la hipotenusa de un triángulo rectángulo." << endl;
		cout << "   10. Caja registradora." << endl;
		cout << "   11. Leer y convertir calificaciones numéricas." << endl;
		cout << "   12. Cual es el mayor y menor de tres valores." << endl;
		cout << " " << endl;
		cout << "   13. Salir" << endl;
		cout<<("")<< endl;
		cout<<("Opcion : ")<< endl;
		cin>>op;
		cout<<("")<< endl;
		switch (op) 
		{
			case 1:
				calcular_salario();
			break;
			case 2:
				calcular_salario_extras();
			break;
			case 3:
				descuento_sueldo();
			break;
			case 4:
				descuento_monto();
			break;
			case 5:
				minutos_a_horas_dias();
			break;
			case 6:
				articulo_ivaydescuento();
			break;
			case 7:
				promedio_notas();
			break;
			case 8:
				cakyf();
			break;
			case 9:
				hip_trianrec();
			break;
			case 10:
				caja_registradora();
			break;
			case 11:
				convertir_notas_numericas();
			break;
			case 12:
				mayor3variables();
			break;
			case 13:
				cout << "Gracias, vuelva pronto" << endl;
			break;
			default:
				cout << "Opcion no valida" << endl;
			cout<<("")<< endl;
			cout << "Presione enter para continuar" << endl;
			cin.get(); 
		}
	}while(op!=13);
}
//1d
void calcular_salario()
{
	system("cls");
	cout << "   1.  Calcular su salario e imprimirlo." << endl;
	cout<<("")<< endl;
	int ht, vh, sd, st, dt;
	cout<<("Digite las horas diarias trabajadas.")<<endl;
	cin>>ht;
	vh=3255;
	sd=ht*(vh*240);
	cout<<("Su salario es : ")<<sd<<endl;
	cout<<("El salario es en base al SMLV.")<<endl;
	system("PAUSE");
}
//2d
void calcular_salario_extras()
{
	system("cls");
	cout << "   2.  Calcular el salario del trabajador dadas las horas trabajadas y la tarifa." << endl;
	cout<<("")<< endl;
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
//3d
void descuento_sueldo()
{
	system("cls");
	cout << "   3.  Calcular el descuento y sueldo neto que recibe el trabajador dado su sueldo." << endl;
	cout<<("")<< endl;
	int s, st, d;
	cout<<("Digite su sueldo")<<endl;
	cin>>s;
	
	if(s<=1000)
	{
		d=(10*s)/100;
		st=s-d;
	}
	else
	{
		if(s>1000 and s<=2000)
		{
			d=(5*s)/100;
			st=s-d;
		}
		else
		{
			if(s>2000)
			{
				d=(3*s)/100;
				st=s-d;	
			}
			else
			{
				cout<<("Digite su sueldo en numeros positivos y enteros.")<<endl;
			}
		}
	}
	cout<<("Su sueldo es : ")<<st<<endl;
	system("PAUSE");
}
//4d
void descuento_monto()
{
	system("cls");
	cout << "   4.  Calcular el descuento 10% y 2%." << endl;
	cout<<("")<< endl;
	int m, d, mt;
	cout<<("Digite su monto.")<<endl;
	cin>>m;
	
	if(m>100)
	{
		d=(10*m)/100;
		mt=m-d;
	}
	else
	{
		if(m<100)
		{
			d=(2*m)/100;
			mt=m-d;
		}
		else
		{
			cout<<("No tiene descuento.")<<endl;
		}
	}
	cout<<("Su monto es : ")<<mt<<endl;
	system("PAUSE");
}
//5d
void minutos_a_horas_dias()
{
	system("cls");
	cout << "   5.  Calcular los días, horas y minutos." << endl;
	cout<<("")<< endl;
	double min, hr, ds;
	cout<<("Digite los minutos.")<<endl;
	cin>>min;
	hr=(min*1)/60;
	ds=(min*1)/1440;
	cout<<("Los minutos digitados son : ")<<hr<<(" horas y ")<<ds<<(" dias.")<<endl;
	system("PAUSE");
}
//6d
void articulo_ivaydescuento()
{
	system("cls");
	cout << "   6.  Factura correspondiente a una compra de un articulo determinado." << endl;
	cout<<("")<< endl;
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
//7d
void promedio_notas()
{
	system("cls");
	cout << "   7.  Calcular promedio de cuatro notas." << endl;
	cout<<("")<< endl;
	double n1, n2, n3, n4, pn;
	cout<<("Digite las 4 notas.")<<endl;
	cin>>n1>>n2>>n3>>n4;
	pn=(n1+n2+n3+n4)/4;
	cout<<("El promedio es : ")<<pn<<endl;
	system("PAUSE");
}
//8d
void cakyf()
{
	system("cls");
	cout << "   8.  Calcular los kelvin y Fahrenheit segun centigrados." << endl;
	cout<<("")<< endl;
	double c, f, k;
	cout<<("Digite los grados centigrados.")<<endl;
	cin>>c;
	f=((c*9)/5)+32;
	k=c+273.15;
	cout<<("Grados Fahrenheit : ")<<f<<endl;
	cout<<("Grados kelvin : ")<<k<<endl;
	system("PAUSE");
}
//9d
void hip_trianrec()
{
	system("cls");
	cout << "   9.  Determinar la hipotenusa de un triángulo rectángulo." << endl;
	cout<<("")<< endl;
	double c1, c2, hc, h;
	cout<<("Digite cateto 1.")<<endl;
	cin>>c1;
	cout<<("Digite cateto 2.")<<endl;
	cin>>c2;
	hc=(c1*c1)+(c2*c2);
	h=sqrt(hc);
	cout<<("La Hipotenusa es : ")<<h<<endl;
	system("PAUSE");
}
//10d
void caja_registradora()
{
	system("cls");
	cout << "   10. Caja registradora." << endl;
	cout<<("")<< endl;
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
//11d
void convertir_notas_numericas()
{
	system("cls");
	cout << "   11. Leer y convertir calificaciones numéricas." << endl;
	cout<<("")<< endl;
	double n;
	cout<<("Digita la nota de 1 a 20.")<<endl;
	cin>>n;
	
	if(n>=19 and n<=20)
	{
		cout<<("Su nota es A.")<<endl;
	}
	else
	{
		if(n>=16 and n<=18)
		{
			cout<<("Su nota es B.")<<endl;
		}
		else
		{
			if(n>=13 and n<=15)
			{
				cout<<("Su nota es C.")<<endl;
			}
			else
			{
				if(n>=10 and n<=12)
				{
					cout<<("Su nota es D.")<<endl;
				}
				else
				{
					if(n>=1 and n<=9)
					{
						cout<<("Su nota es E.")<<endl;
					}
					else
					{
						cout<<("Los datos ingresados no son validos.")<<endl;
					}
				}
			}
		}
	}
	system("PAUSE");
}
//12d
void mayor3variables()
{
	system("cls");
	cout << "   12. Cual es el mayor y menor de tres valores." << endl;
	cout<<("")<< endl;
	int A, B, C;
	cout<<("Digite los 3 valores.")<<endl;
	cin>>A>>B>>C;
	if(A==B or B==A or A==C or C==A or B==C or C==B)
	{
		cout<<("Los Valores no pueden ser iguales, Digite valores distintos.")<<endl;
	}
	else
	{
		if(A>B and B>C)
		{
			cout<<("El mayor es : ")<<A<<(" y el menor es : ")<<C<<endl;
		}
		else
		{
			if(A>C and C>B)
			{
				cout<<("El mayor es : ")<<A<<(" y el menor es : ")<<B<<endl;
			}
			else
			{
				if(B>A and A>C)
				{
					cout<<("El mayor es : ")<<B<<(" y el menor es : ")<<C<<endl;
				}
				else
				{
					if(B>C and C>A)
					{
						cout<<("El mayor es : ")<<B<<(" y el menor es : ")<<A<<endl;
					}
					else
					{
						if(C>A and A>B)
						{
							cout<<("El mayor es : ")<<C<<(" y el menor es : ")<<B<<endl;
						}
						else
						{
							if(C>B and B>A)
							{
								cout<<("El mayor es : ")<<C<<(" y el menor es : ")<<A<<endl;
							}
							else
							{
								cout<<("Los datos ingresados no son validos.")<<endl;
							}
						}
					}
				}
			}
		}
	}
	system("PAUSE");
}
//                    Menu Ciclos
void ciclos()
{
	int op;
	do
	{
		system("cls");
		cout<<("Menu De Ciclos.")<< endl;
		cout<<("")<< endl;
		cout<<("Elija una opcion")<< endl;
		cout<<("")<< endl;
		cout << "   1.  Mostrar todos los enteros comprendidos entre 1 y el número leído." << endl;
		cout << "   2.  Mostrar todos los pares comprendidos entre 1 y el número leído." << endl;
		cout << "   3.  Leer dos números y mostrar todos los enteros comprendidos entre ellos." << endl;
		cout << "   4.  Mostrar en pantalla todos los enteros comprendidos entre 1 y 100." << endl;
		cout << "   5.  Mostrar en pantalla todos los pares comprendidos entre 20 y 200." << endl;
		cout << "   6.  Determinar a cuánto es igual la suma de todos los enteros comprendidos entre 1 y el número leído." << endl;
		cout << "   7.  Mostrar en pantalla todos los enteros comprendidos entre un dígito y otro." << endl;
		cout << "   8.  Determinar si el numero tiene el dígito 1" << endl;
		cout << "   9.  Mostrar en pantalla la tabla de multiplicar del número 5." << endl;
		cout << "   10. Generar todas las tablas de multiplicar del 1 al 10." << endl;
		cout << "   11. Tabla de multiplicar del numero X." << endl;
		cout << "   12. Serie de Fibonacci hasta llegar o sobrepasar el número 10000." << endl;
		cout << "   13. Suma de los elementos de la serie de Fibonacci entre 0 y 100." << endl;
		cout << "   14. Leer un número y calcularle su factorial." << endl;
		cout << "   15. Generar las siguientes parejas de enteros: 0 1,1 1,2 2,3 2,4 3,5 3,6 4,7 4,8 5,9 5" << endl;
		cout << "   16. Generar las siguientes ternas de números, 1 1 1,2 1 2,3 1 3,4 2 1,5 2 2,6 2 3,7 3 1,8 3 2,9 3 3" << endl;
		cout << "   17. Generar las siguientes parejas de números,0 1,1 1,2 1,3 1,4 2,5 2,6 2,7 2" << endl;
		cout << " " << endl;
		cout << "   18. Salir" << endl;
		cout<<("")<< endl;
		cout<<("Opcion : ")<< endl;
		cin>>op;
		cout<<("")<< endl;
		switch (op) 
		{
			case 1:
				ent_1yx();
			break;
			case 2:
				nt_par_1yx();
			break;
			case 3:
				ent_xyx();
			break;
			case 4:
				ent_1y100();
			break;
			case 5:
				ent_par_20y200();
			break;
			case 6:
				ent_sum_1yx();
			break;
			case 7:
				ent_dig1ydig2();
			break;
			case 8:
				ent_3dig_1();
			break;
			case 9:
				tabla_multiplicacion_5();
			break;
			case 10:
				tablas_multi_1a10();
			break;
			case 11:
				tabla_mult_entero();
			break;
			case 12:
				serie_fibonacci();
			break;
			case 13:
				serie_suma_fibonacci();
			break;
			case 14:
				factorial_num();
			break;
			case 15:
				parejas_enteros();
			break;
			case 16:
				parejas_enteros2();
			break;
			case 17:
				parejas_numeros3();
			break;
			case 18:
				cout << "Gracias, vuelva pronto" << endl;
			break;
			default:
				cout << "Opcion no valida" << endl;
			cout<<("")<< endl;
			cout << "Presione enter para continuar" << endl;
			cin.get(); 
		}
	}while(op!=18);
}
//1c
void ent_1yx()
{
	system("cls");
	cout << "   1.  Mostrar todos los enteros comprendidos entre 1 y el número leído." << endl;
	cout<<("")<< endl;
	int n, z;
	cout<<("Digite un numero entero.")<<endl;
	cin>>z;
	n=0;
	do
	{
		cout<<n<<endl;
		n=n+1;
	}
	while(n<z+1);
	system("PAUSE");
}
//2c
void nt_par_1yx()
{
	system("cls");
	cout << "   2.  Mostrar todos los pares comprendidos entre 1 y el número leído." << endl;
	cout<<("")<< endl;
	int n, z;
	cout<<("Digite un numero entero.")<<endl;
	cin>>z;
	n=0;
	do
	{
		cout<<n<<endl,
		n=n+2;
	}
	while(n<z+1);
	system("PAUSE");
}
//3c
void ent_xyx()
{
	system("cls");
	cout << "   3.  Leer dos números y mostrar todos los enteros comprendidos entre ellos." << endl;
	cout<<("")<< endl;
	int z, x;
	cout<<("Digite dos numeros enteros.")<<endl;
	cin>>z>>x;
	if(z<x)
	{
		for(int z=z;z<=x;z+=1)
		{
			cout<<z<<endl;
		}
	}
	else
	{
		for(int x=x;x<=z;x+=1)
		{
			cout<<x<<endl;
		}
	}
	system("PAUSE");
}
//4c
void ent_1y100()
{
	system("cls");
	cout << "   4.  Mostrar en pantalla todos los enteros comprendidos entre 1 y 100." << endl;
	cout<<("")<< endl;
	int n;
	n=1;
	cout<<("Enteros comprendidos entre 1 y 100 : ")<<endl;
	while(n<=100)
	{
		cout<<n<<endl;
		n=n+1;
	}
	system("PAUSE");
}
//5c
void ent_par_20y200()
{
	system("cls");
	cout << "   5.  Mostrar en pantalla todos los pares comprendidos entre 20 y 200." << endl;
	cout<<("")<< endl;
	int n;
	cout<<("Pares comprendidos entre 20 y 200 : ")<<endl;
	for(int n=20;n<=200;n+=2)
	{
		cout<<n<<endl;
	}
	system("PAUSE");
}
//6c
void ent_sum_1yx()
{
	system("cls");
	cout << "   6.  Determinar a cuánto es igual la suma de todos los enteros comprendidos entre 1 y el número leído." << endl;
	cout<<("")<< endl;
	int n, z, p;
	cout<<("Digite numero entero.")<<endl;
	cin>>z;
	n=0;
	p=0;
	while(n<z)
	{
		n=n+1;
		p=n+p;
	}
	cout<<("La suma es igual a : ")<<p<<endl;
	system("PAUSE");
}
//7c
void ent_dig1ydig2()
{
	system("cls");
	cout << "   7.  Mostrar en pantalla todos los enteros comprendidos entre un dígito y otro." << endl;
	cout<<("")<< endl;
	int num, n, d1, d2;
	cout<<("Digite un numero entero de dos digitos.")<<endl;
	cin>>num;
	if(num>=10 and num<=99)
	{
		d1=num/10;
		d2=num-(num/10)*10;
		if(d1<d2)
		{
			do
			{
				cout<<d1<<endl;
				d1=d1+1;
			}
			while(d1<(d2+1));
		}
		else
		{
			do
			{
				cout<<d2<<endl;
				d2=d2+1;
			}
			while(d2<(d1+1));
		}
	}
	else
	{
		cout<<("El numero digitado no es de dos digitos.")<<endl;
	}
	system("PAUSE");
}
//8c
void ent_3dig_1()
{
	system("cls");
	cout << "   8.  Determinar si el numero tiene el dígito 1" << endl;
	cout<<("")<< endl;
	int num, d1, d2, d3, da;
	cout<<("Digite un numero entero de tres digitos.")<<endl;
	cin>>num;
	if(num>=100 and num<=999)
	{
		d1=num/100;
		da=num/10;
		d2=da-(da/10)*10;
		d3=num-(num/10)*10;
		if(d1!=1 and d2!=1 and d3!=1)
		{
			cout<<("El numero digitado no tiene 1.")<<endl;
		}
		while(d1==1)
		{
			cout<<("El numero 1 esta en el digito 1.")<<endl;
			d1=d1+1;
		}
		while(d2==1)
		{
			cout<<("El numero 1 esta en el digito 2.")<<endl;
			d2=d2+1;
		}
		while(d3==1)
		{
			cout<<("El numero 1 esta en el digito 3.")<<endl;
			d3=d3+1;
		}
	}
	else
	{
		cout<<("El numero no tiene tres digitos.")<<endl;
	}
	system("PAUSE");
}
//9c
void tabla_multiplicacion_5()
{
	system("cls");
	cout << "   9.  Mostrar en pantalla la tabla de multiplicar del número 5." << endl;
	cout<<("")<< endl;
	int n, z, r;
	n=5;
	z=1;
	r=5;
	cout<<("Tabla de multiplicar del numero 5.")<<endl;
	do
	{
		cout<<n<<("x")<<z<<("=")<<r<<endl;
		z=z+1;
		r=n*z;
	}
	while(z<11);
	system("PAUSE");
}
//10c
void tablas_multi_1a10()
{
	system("cls");
	cout << "   10. Generar todas las tablas de multiplicar del 1 al 10." << endl;
	cout<<("")<< endl;
	int n, z, r;
	for(int n=1;n<=10;n+=1)
	{
		cout<<("Tabla de multiplicar del ")<<n<<endl;
		for(int z=1;z<=10;z+=1)
		{
			r=z*n;
			cout<<n<<("x")<<z<<("=")<<r<<endl;
		}
	}
	system("PAUSE");
}
//11c
void tabla_mult_entero()
{
	system("cls");
	cout << "   11. Tabla de multiplicar del numero X." << endl;
	cout<<("")<< endl;
	int n, z, r;
	cout<<("Digite numero entero.")<<endl;
	cin>>n;
	z=1;
	r=n;
	cout<<("Tabla de multiplicar del ")<<n<<endl;
	do
	{
		cout<<n<<("x")<<z<<("=")<<r<<endl;
		z=z+1;
		r=n*z;
	}
	while(z<11);
	system("PAUSE");
}
//12c
void serie_fibonacci()
{
	system("cls");
	cout << "   12. Serie de Fibonacci hasta llegar o sobrepasar el número 10000." << endl;
	cout<<("")<< endl;
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
//13c
void serie_suma_fibonacci()
{
	system("cls");
	cout << "   13. Suma de los elementos de la serie de Fibonacci entre 0 y 100." << endl;
	cout<<("")<< endl;
	int a, s, p;
	a=0;
	s=1;
	p=0;
	while(s<=100)
	{
		cout<<a<<endl;
		cout<<s<<endl;
		p=(s+a)+p;
		a=a+s;
		s=s+a;
	}
	cout<<("La suma total es : ")<<p<<endl;
	system("PAUSE");
}
//14c
void factorial_num()
{
	system("cls");
	cout << "   14. Leer un número y calcularle su factorial." << endl;
	cout<<("")<< endl;
	double num, facto, cont;
	cout<<("Digite un numero positivo.")<<endl;
	cin>>num;
	if(num<0)
	{
		cout<<("No puede ser un numero negativo.")<<endl;
	}
	else
	{
		if(num==0)
		{
			cout<<("El factorial de 0 es : 0.")<<endl;
		}
		else
		{
			if(num!=0)
			{
				facto=1;
				for(int cont=1;cont<=num;cont+=1)
				{
					facto=facto*cont;
				}
				cout<<("El factorial de ")<<num<<(" es : ")<<facto<<endl;
			}
		}
	}
	system("PAUSE");
}
//15c
void parejas_enteros()
{
	system("cls");
	cout << "   15. Generar las siguientes parejas de enteros: 0 1,1 1,2 2,3 2,4 3,5 3,6 4,7 4,8 5,9 5" << endl;
	cout<<("")<< endl;
	int p, q, n;
	p=0;
	for(int q=1;q<=5;q+=1)
	{
		for(int n=1;n<=2;n+=1)
		{
			cout<<p<<(" ")<<q<<endl;
			p=p+1;
		}
	}
	system("PAUSE");
}
//16c
void parejas_enteros2()
{
	system("cls");
	cout << "   16. Generar las siguientes ternas de números, 1 1 1,2 1 2,3 1 3,4 2 1,5 2 2,6 2 3,7 3 1,8 3 2,9 3 3" << endl;
	cout<<("")<< endl;
	int p, q, n;
	p=1;
	for(int q=1;q<=3;q+=1)
	{
		for(int n=1;n<=3;n+=1)
		{
			cout<<p<<(" ")<<q<<(" ")<<n<<endl;
			p=p+1;
		}
	}
	system("PAUSE");
}
//17c
void parejas_numeros3()
{
	system("cls");
	cout << "   17. Generar las siguientes parejas de números,0 1,1 1,2 1,3 1,4 2,5 2,6 2,7 2" << endl;
	cout<<("")<< endl;
	int p, q, n;
	p=0;
	for(int q=1;q<=2;q+=1)
	{
		for(int n=1;n<=4;n+=1)
		{
			cout<<p<<(" ")<<q<<endl;
			p=p+1;
		}
	}
	system("PAUSE");
}
//                    Menu Vectores
void vectores()
{
	int op;
	do
	{
		system("cls");
		cout<<("Menu De Vectores.")<< endl;
		cout<<("")<< endl;
		cout<<("Elija una opcion")<< endl;
		cout<<("")<< endl;
		cout << "   1.  Determinar en qué posición del vector está el mayor número leído." << endl;
		cout << "   2.  Determinar en qué posición del vector está el mayor número par leído." << endl;
		cout << "   3.  Mostrar en pantalla los 10 primeros elementos de la serie de Fibonacci." << endl;
		cout << "   4.  Determinar en qué posiciones se encuentra el número mayor." << endl;
		cout << "   5.  Determinar en qué posiciones se encuentran los números terminados en 4." << endl;
		cout << "   6.  Determinar cuántas veces está repetido el mayor." << endl;
		cout << "   7.  Determinar en qué posiciones se encuentran los números con mas de 3 dígitos." << endl;
		cout << "   8.  Determinar cuántos números tienen, de los almacenados allí, tienen menos de 3 dígitos." << endl;
		cout << "   9.  Determinar a cuánto es igual el promedio entero de los datos del vector." << endl;
		cout << "   10. Determinar si el promedio entero está almacenado en el vector." << endl;
		cout << "   11. Determinar cuántos números negativos hay." << endl;
		cout << "   12. Determinar cuál es el número menor." << endl;
		cout << "   13. Determinar en qué posición está el número cuya suma de dígitos sea la mayor." << endl;
		cout << " " << endl;
		cout << "   14. Salir" << endl;
		cout<<("")<< endl;
		cout<<("Opcion : ")<< endl;
		cin>>op;
		cout<<("")<< endl;
		switch (op)
		{
			case 1:
				pos_mayor();
			break;
			case 2:
				pos_may_par();
			break;
			case 3:
				vec_fibonacci();
			break;
			case 4:
				pos_mayor2();
			break;
			case 5:
				num_term_4();
			break;
			case 6:
				pos_mayor_rep();
			break;
			case 7:
				pos_3_dig();
			break;
			case 8:
				pos_3_dig2();
			break;
			case 9:
				prom_vec();
			break;
			case 10:
				prom_vec_al();
			break;
			case 11:
				num_neg();
			break;
			case 12:
				num_menor();
			break;
			case 13:
				sum_dig_mayor();
			break;
			case 14:
				cout << "Gracias, vuelva pronto" << endl;
			break;
			default:
				cout << "Opcion no valida" << endl;
			cout<<("")<< endl;
			cout << "Presione enter para continuar" << endl;
			cin.get(); 
		}
	}while(op!=14);
}
//1v
void pos_mayor()
{
	system("cls");
	cout << "   1.  Determinar en qué posición del vector está el mayor número leído." << endl;
	cout<<("")<< endl;
	int i, pm;
	int V[10];
	cout<<("Digite 10 numeros enteros.")<<endl;
	for(int i=0;i<=9;i+=1)
	{
		cin>>V[i];
	}
	pm=1;
	for(int i=0;i<=9;i+=1)
	{
		if(V[i]>=V[pm])
		{
			pm=i;
		}
	}
	cout<<("El numero mayor esta en la posicion : ")<<pm+1<<endl;
	system("PAUSE");
}
//2v
void pos_may_par()
{
	system("cls");
	cout << "   2.  Determinar en qué posición del vector está el mayor número par leído." << endl;
	cout<<("")<< endl;
	int i, pm;
	int V[10];
	cout<<("Digite 10 numeros enteros.")<<endl;
	for(int i=0;i<=9;i+=1)
	{
		cin>>V[i];
	}
	pm=1;
	for(int i=0;i<=9;i+=1)
	{
		if(V[i]>=V[pm])
		{
			if(V[i] % 2==0)
			{
				pm=i;
			}
		}
	}
	cout<<("El numero mayor numero par esta en la posicion : ")<<pm+1<<endl;
	system("PAUSE");
}
//3v
void vec_fibonacci()
{
	system("cls");
	cout << "   3.  Mostrar en pantalla los 10 primeros elementos de la serie de Fibonacci." << endl;
	cout<<("")<< endl;
	int n1, n2, a, i;
	int V[10];
	V[0]=0;
	V[1]=1;
	n1=0;
	n2=1;
	for(int i=2;i<=9;i+=1)
	{
		a=n1+n2;
		n1=n2;
		n2=a;
		V[i]=a;
	}
	cout<<("Fibonacci")<<endl;
	for(int i=0;i<=9;i+=1)
	{
		cout<<V[i]<<endl;
	}
	system("PAUSE");
}
//4v
void pos_mayor2()
{
	system("cls");
	cout << "   4.  Determinar en qué posiciones se encuentra el número mayor." << endl;
	cout<<("")<< endl;
	int i, pm;
	int V[10];
	cout<<("Digite 10 numeros enteros.")<<endl;
	for(int i=0;i<=9;i+=1)
	{
		cin>>V[i];
	}
	pm=1;
	for(int i=0;i<=9;i+=1)
	{
		if(V[i]>=V[pm])
		{
			pm=i;
		}
	}
	cout<<("El numero mayor esta en la posicion : ")<<pm+1<<endl;
	system("PAUSE");
}
//5v
void num_term_4()
{
	system("cls");
	cout << "   5.  Determinar en qué posiciones se encuentran los números terminados en 4." << endl;
	cout<<("")<< endl;
	int i, ud, p, cont;
	int V[10];
	cout<<("Digite 10 numeros enteros.")<<endl;
	for(int i=0;i<=9;i+=1)
	{
		cin>>V[i];
	}
	cout<<("Los numeros terminados en 4 estan en las posiciones : ")<<endl;
	cont=0;
	for(int i=0;i<=9;i+=1)
	{
		ud=V[i]-(V[i]/10)*10;
		if(ud==4 or ud==-4)
		{
			p=i;
			cont=cont+1;
			cout<<p+1<<endl;
		}
	}
	if(cont==0)
	{
		cout<<("No hay numeros terminados en 4.")<<endl;
	}
	system("PAUSE");
}
//6v
void pos_mayor_rep()
{
	system("cls");
	cout << "   6.  Determinar cuántas veces está repetido el mayor." << endl;
	cout<<("")<< endl;
	int i, NM, cont;
	int V[10];
	cout<<("Digite 10 numeros enteros.")<<endl;
	for(int i=0;i<=9;i+=1)
	{
		cin>>V[i];
	}
	cont=0;
	NM=0;
	for(int i=0;i<=9;i+=1)
	{
		if(V[i]>=NM)
		{
			NM=V[i];
		}
	}
	for(int i=0;i<=9;i+=1)
	{
		if(V[i]==NM)
		{
			cont=cont+1;
		}
	}
	cout<<("El numero mayor se repite ")<<cont<<(" veces.")<<endl;
	system("PAUSE");
}
//7v
void pos_3_dig()
{
	system("cls");
	cout << "   7.  Determinar en qué posiciones se encuentran los números con mas de 3 dígitos." << endl;
	cout<<("")<< endl;
	int i, p;
	int V[10];
	cout<<("Digite 10 numeros enteros.")<<endl;
	for(int i=0;i<=9;i+=1)
	{
		cin>>V[i];
	}
	cout<<("Los numeros con mas de 3 dígitos estan en las posiciones : ")<<endl;
	for(int i=0;i<=9;i+=1)
	{
		if(V[i]>999)
		{
			p=i;
			cout<<p+1<<endl;
		}
	}
	system("PAUSE");
}
//8v
void pos_3_dig2()
{
	system("cls");
	cout << "   8.  Determinar cuántos números tienen, de los almacenados allí, tienen menos de 3 dígitos." << endl;
	cout<<("")<< endl;
	int i, cont;
	int V[10];
	cout<<("Digite 10 numeros enteros.")<<endl;
	for(int i=0;i<=9;i+=1)
	{
		cin>>V[i];
	}
	cont=0;
	for(int i=0;i<=9;i+=1)
	{
		if(V[i]<=99)
		{
			cont=cont+1;
		}
	}
	cout<<("Numeros que tienen menos de 3 digitos : ")<<cont<<endl;
	system("PAUSE");
}
//9v
void prom_vec()
{
	system("cls");
	cout << "   9.  Determinar a cuánto es igual el promedio entero de los datos del vector." << endl;
	cout<<("")<< endl;
	double prom;
	int i, suma;
	int V[10];
	cout<<("Digite 10 numeros enteros.")<<endl;
	for(int i=0;i<=9;i+=1)
	{
		cin>>V[i];
	}
	suma=0;
	for(int i=0;i<=9;i+=1)
	{
		suma=(suma+V[i]);
		prom=(suma/(i+1));
	}
	cout<<("El promedio es : ")<<prom<<endl;
	system("PAUSE");
}
//10v
void prom_vec_al()
{
	system("cls");
	cout << "   10. Determinar si el promedio entero está almacenado en el vector." << endl;
	cout<<("")<< endl;
	double prom;
	int i, suma, cont;
	int V[10];
	cout<<("Digite 10 numeros enteros.")<<endl;
	for(int i=0;i<=9;i+=1)
	{
		cin>>V[i];
	}
	suma=0;
	for(int i=0;i<=9;i+=1)
	{
		suma=(suma+V[i]);
		prom=(suma/(i+1));
	}
	cont=0;
	for(int i=0;i<=9;i+=1)
	{
		if(V[i]==prom)
		{
			cout<<("El promedio esta almacenado en : ")<<i+1<<endl;
		}
		else
		{
			cont=cont+1;
			if(cont==10)
			{
				cout<<("El promedio no esta almacenado en el vector")<<endl;
			}
		}
	}
	system("PAUSE");
}
//11v
void num_neg()
{
	system("cls");
	cout << "   11. Determinar cuántos números negativos hay." << endl;
	cout<<("")<< endl;
	int i, n;
	int V[10];
	cout<<("Digite 10 numeros enteros.")<<endl;
	for(int i=0;i<=9;i+=1)
	{
		cin>>V[i];
	}
	n=0;
	for(int i=0;i<=9;i+=1)
	{
		if(V[i]<0)
		{
			n=n+1;
		}
	}
	cout<<("Hay ")<<n<<(" numeros negativos.")<<endl;
	system("PAUSE");
}
//12v
void num_menor()
{
	system("cls");
	cout << "   12. Determinar cuál es el número menor." << endl;
	cout<<("")<< endl;
	int i, pm;
	int V[10];
	cout<<("Digite 10 numeros enteros.")<<endl;
	for(int i=0;i<=9;i+=1)
	{
		cin>>V[i];
	}
	pm=V[0];
	for(int i=0;i<=9;i+=1)
	{
		if(V[i]<=pm)
		{
			pm=V[i];
		}
	}
	cout<<("El numero menor es : ")<<pm<<endl;
	system("PAUSE");
}
//13v
void sum_dig_mayor()
{
	system("cls");
	cout << "   13. Determinar en qué posición está el número cuya suma de dígitos sea la mayor." << endl;
	cout<<("")<< endl;
	int i, D1, D2, SD, COM, DT;
	int V[10];
	cout<<("Digite 10 numeros enteros.")<<endl;
	for(int i=0;i<=9;i+=1)
	{
		cin>>V[i];
	}
	COM=0;
	for(int i=0;i<=9;i+=1)
	{
		D1=V[i]/10;
		D2=V[i]-(V[i]/10)*10;
		SD=D1+D2;
		if(SD>=COM)
		{
			DT=i;
			COM=SD;
		}
	}
	cout<<("El numero cuya suma de digitos es mayor esta en la posicion : ")<<DT+1<<endl;
	system("PAUSE");
}
//                    Menu Matrices
void matrices()
{
	int op;
	do
	{
		system("cls");
		cout<<("Menu de Matrices.")<< endl;
		cout<<("")<< endl;
		cout<<("Elija una opcion")<< endl;
		cout<<("")<< endl;
		cout << "   1.  Determinar en qué fila y en qué columna se encuentra el número mayor." << endl;
		cout << "   2.  Determinar cuántas veces se repita en ella el número mayor." << endl;
		cout << "   3.  Determinar en qué posiciones exactas se encuentran los números pares." << endl;
		cout << "   4.  Determinar cuál es la fila que tiene la mayor suma." << endl;
		cout << "   5.  Calcular el promedio de los números mayores de cada fila." << endl;
		cout << "   6.  Determinar en qué posiciones están los numeros terminados en 0." << endl;
		cout << "   7.  Determinar cuántos enteros terminados en 0 hay almacenados." << endl;
		cout << "   8.  Determinar en qué columna está el menor número par." << endl;
		cout << "   9.  Determinar cuántos números almacenados tienen un solo dígito." << endl;
		cout << "   10. Determinar cuántos datos tienen en común." << endl;
		cout << "   11. Determinar si el número mayor almacenado en la primera está en la segunda." << endl;
		cout << "   12. Determinar si el número mayor de una de una es igual al número mayor de la otra." << endl;
		cout << "   13. Determinar si el número mayor de una se encuentra en la misma posición exacta en la otra." << endl;
		cout << "   14. Determinar si el promedio de las “esquinas” de una es igual al de las “esquinas” de la otra." << endl;
		cout << "   15. Determinar si el promedio de los elementos de la diagonal de una es igual al de los de la diagonal de la otra." << endl;
		cout << " " << endl;
		cout << "   16. Salir" << endl;
		cout<<("")<< endl;
		cout<<("Opcion : ")<< endl;
		cin>>op;
		cout<<("")<< endl;
		switch (op) 
		{
			case 1:
				fyc_num_mayor();
			break;
			case 2:
				num_rep_may();
			break;
			case 3:
				num_par();
			break;
			case 4:
				suma_filas();
			break;
			case 5:
				prom_suma_filas();
			break;
			case 6:
				pos_0();
			break;
			case 7:
				cont_0();
			break;
			case 8:
				fyc_num_mayor2();
			break;
			case 9:
				cont_1dig();
			break;
			case 10:
				cont_2mat_com();
			break;
			case 11:
				comp_2mat_mayor();
			break;
			case 12:
				comp_2mat_mayor2();
			break;
			case 13:
				comp_mat_pos_exact();
			break;
			case 14:
				comp_mat_prom();
			break;
			case 15:
				comp_mat_prom_diad();
			break;
			case 16:
				cout << "Gracias, vuelva pronto" << endl;
			break;
			default:
				cout << "Opcion no valida" << endl;
			cout<<("")<< endl;
			cout << "Presione enter para continuar" << endl;
			cin.get(); 
		}
	}while(op!=16);
}
//1m
void fyc_num_mayor()
{
	system("cls");
	cout << "   1.  Determinar en qué fila y en qué columna se encuentra el número mayor." << endl;
	cout<<("")<< endl;
	int f, c, NM, FM, CM;
	int M[4][4];
	cout<<("Digite 16 numeros enteros.")<<endl;
	for(int f=0;f<=3;f+=1)
	{
		for(int c=0;c<=3;c+=1)
		{
			cin>>M[f][c];
		}
	}
	NM=0;
	for(int f=0;f<=3;f+=1)
	{
		for(int c=0;c<=3;c+=1)
		{
			if(M[f][c]>NM)
			{
				NM=M[f][c];
				FM=f;
				CM=c;
			}
		}
	}
	cout<<("El mayor es : ")<<NM<<(" y esta en la fila : ")<<FM+1<<(" columna : ")<<CM+1<<endl;
	system("PAUSE");
}
//2m
void num_rep_may()
{
	system("cls");
	cout << "   2.  Determinar cuántas veces se repita en ella el número mayor." << endl;
	cout<<("")<< endl;
	int f, c, NM, FM, CM, Cont;
	int M[4][4];
	cout<<("Digite 16 numeros enteros.")<<endl;
	for(int f=0;f<=3;f+=1)
	{
		for(int c=0;c<=3;c+=1)
		{
			cin>>M[f][c];
		}
	}
	NM=0;
	for(int f=0;f<=3;f+=1)
	{
		for(int c=0;c<=3;c+=1)
		{
			if(M[f][c]>NM)
			{
				NM=M[f][c];
				FM=f;
				CM=c;
			}
		}
	}
	Cont=0;
	for(int f=0;f<=3;f+=1)
	{
		for(int c=0;c<=3;c+=1)
		{
			if(M[f][c]==NM)
			{
				Cont=Cont+1;
			}
		}
	}
	cout<<("El numero se repite : ")<<Cont<<(" Veces")<<endl;
	system("PAUSE");
}
//3m
void num_par()
{
	system("cls");
	cout << "   3.  Determinar en qué posiciones exactas se encuentran los números pares." << endl;
	cout<<("")<< endl;
	int f, c, NM, NF, NC;
	int M[3][4];
	cout<<("Digite 12 numeros enteros.")<<endl;
	for(int f=0;f<=2;f+=1)
	{
		for(int c=0;c<=3;c+=1)
		{
			cin>>M[f][c];
		}
	}
	cout<<(" ")<<endl;
	cout<<("El numero par esta en : ")<<endl;
	cout<<("Fila   ")<<("Columna")<<endl;
	for(int f=0;f<=2;f+=1)
	{
		for(int c=0;c<=3;c+=1)
		{
			if(M[f][c]%2==0)
			{
				NM=M[f][c];
				NF=f;
				NC=c;
				cout<<(" ")<<NF+1<<("   -    ")<<NC+1<<endl;
			}
		}
	}
	system("PAUSE");
}
//4m
void suma_filas()
{
	system("cls");
	cout << "   4.  Determinar cuál es la fila que tiene la mayor suma." << endl;
	cout<<("")<< endl;
	int f, c, SF, MS, i;
	int M[4][3], V[4];
	cout<<("Digite 12 numeros enteros.")<<endl;
	for(int f=0;f<=3;f+=1)
	{
		for(int c=0;c<=2;c+=1)
		{
			cin>>M[f][c];
		}
	}
	for(int f=0;f<=3;f+=1)
	{
		SF=0;
		for(int c=0;c<=2;c+=1)
		{
			SF=SF+M[f][c];
		}
		V[f]=SF;
	}
	MS=0;
	i=0;
	for(int f=0;f<=3;f+=1)
	{
		if(V[f]>=MS)
		{
			MS=V[f];
			i=f;
		}
	}
	cout<<("El mayor suma esta en la fila : ")<<i+1<<endl;
	system("PAUSE");
}
//5m
void prom_suma_filas()
{
	system("cls");
	cout << "   5.  Calcular el promedio de los números mayores de cada fila." << endl;
	cout<<("")<< endl;
	int f, c, SF, suma, Prom;
	int M[4][4], V[4];
	cout<<("Digite 16 numeros enteros.")<<endl;
	for(int f=0;f<=3;f+=1)
	{
		for(int c=0;c<=3;c+=1)
		{
			cin>>M[f][c];
		}
	}
	for(int f=0;f<=3;f+=1)
	{
		SF=0;
		for(int c=0;c<=3;c+=1)
		{
			SF=SF+M[f][c];
		}
		V[f]=SF;
	}
	suma=0;
	for(int f=0;f<=3;f+=1)
	{
		suma=suma+V[f];
		Prom=suma/(f+1);
	}
	cout<<("El promedio de los numeros mayores de cada fila es : ")<<Prom<<endl;
	system("PAUSE");
}
//6m
void pos_0()
{
	system("cls");
	cout << "   6.  Determinar en qué posiciones están los numeros terminados en 0." << endl;
	cout<<("")<< endl;
	int f, c, Comp;
	int M[4][4];
	cout<<("Digite 16 numeros enteros.")<<endl;
	for(int f=0;f<=3;f+=1)
	{
		for(int c=0;c<=3;c+=1)
		{
			cin>>M[f][c];
		}
	}
	cout<<(" ")<<endl;
	cout<<("Los enteros terminado en cero esta en: ")<<endl;
	cout<<("Fila   ")<<("Columna")<<endl;
	for(int f=0;f<=3;f+=1)
	{
		for(int c=0;c<=3;c+=1)
		{
			Comp=M[f][c]-(M[f][c]/10)*10;
			if(Comp==0)
			{
				cout<<(" ")<<f+1<<("   -    ")<<c+1<<endl;
			}
		}
	}
	system("PAUSE");
}
//7m
void cont_0()
{
	system("cls");
	cout << "   7.  Determinar cuántos enteros terminados en 0 hay almacenados." << endl;
	cout<<("")<< endl;
	int f, c, Cont, Comp;
	int M[4][4];
	cout<<("Digite 16 numeros enteros.")<<endl;
	for(int f=0;f<=3;f+=1)
	{
		for(int c=0;c<=3;c+=1)
		{
			cin>>M[f][c];
		}
	}
	Cont=0;
	for(int f=0;f<=3;f+=1)
	{
		for(int c=0;c<=3;c+=1)
		{
			Comp=M[f][c]-(M[f][c]/10)*10;
			if(Comp==0)
			{
				Cont=Cont+1;
			}
		}
	}
	cout<<("Numeros enteros terminados en 0 : ")<<Cont<<endl;
	system("PAUSE");
}
//8m
void fyc_num_mayor2()
{
	system("cls");
	cout << "   8.  Determinar en qué columna está el menor número par." << endl;
	cout<<("")<< endl;
	int f, c, NM, FM, CM;
	int M[5][3];
	cout<<("Digite 15 numeros enteros.")<<endl;
	for(int f=0;f<=4;f+=1)
	{
		for(int c=0;c<=2;c+=1)
		{
			cin>>M[f][c];
		}
	}
	NM=0;
	for(int f=0;f<=4;f+=1)
	{
		for(int c=0;c<=2;c+=1)
		{
			if(M[f][c]>=NM)
			{
				NM=M[f][c];
			}
		}
	}
	for(int f=0;f<=4;f+=1)
	{
		for(int c=0;c<=2;c+=1)
		{
			if(M[f][c]<=NM and M[f][c]%2==0)
			{
				NM=M[f][c];
				FM=f;
				CM=c;
			}
		}
	}
	if(NM%2==0)
	{
		cout<<("El menor par es : ")<<NM<<(" y esta en la columna : ")<<CM+1<<endl;
	}
	else
	{
		cout<<("No hay numeros pares")<<endl;
	}
	system("PAUSE");
}
//9m
void cont_1dig()
{
	system("cls");
	cout << "   9.  Determinar cuántos números almacenados tienen un solo dígito." << endl;
	cout<<("")<< endl;
	int f, c, Cont;
	int M[5][4];
	cout<<("Digite 20 numeros enteros.")<<endl;
	for(int f=0;f<=4;f+=1)
	{
		for(int c=0;c<=3;c+=1)
		{
			cin>>M[f][c];
		}
	}
	Cont=0;
	for(int f=0;f<=4;f+=1)
	{
		for(int c=0;c<=3;c+=1)
		{
			if(M[f][c]>=0 and M[f][c]<=9)
			{
				Cont=Cont+1;
			}
			else
			{
				if(M[f][c]<=0 and M[f][c]>=(-9))
				{
					Cont=Cont+1;
				}
			}
		}
	}
	cout<<("Hay ")<<Cont<<(" numeros con un solo digito.")<<endl;
	system("PAUSE");
}
//10m
void cont_2mat_com()
{
	system("cls");
	cout << "   10. Determinar cuántos datos tienen en común." << endl;
	cout<<("")<< endl;
	int f, c, g, v, Cont;
	int M[4][5], D[4][5];
	cout<<("Digite 20 numeros enteros para la primera matriz.")<<endl;
	for(int f=0;f<=3;f+=1)
	{
		for(int c=0;c<=4;c+=1)
		{
			cin>>M[f][c];
		}
	}
	cout<<("Digite 20 numeros enteros para la segunda matriz.")<<endl;
	for(int g=0;g<=3;g+=1)
	{
		for(int v=0;v<=4;v+=1)
		{
			cin>>D[g][v];
		}
	}
	Cont=0;
	for(int f=0;f<=3;f+=1)
	{
		for(int c=0;c<=4;c+=1)
		{
			for(int g=0;g<=3;g+=1)
			{
				for(int v=0;v<=4;v+=1)
				{
					if(M[f][c]==D[g][v])
					{
						Cont=Cont+1;
					}
				}
			}
		}
	}
	if(Cont==0)
	{
		cout<<("No tienen datos en comun.")<<endl;
	}
	else
	{
		cout<<("Numeros en comun : ")<<Cont<<endl;
	}
	system("PAUSE");
}
//11m
void comp_2mat_mayor()
{
	system("cls");
	cout << "   11. Determinar si el número mayor almacenado en la primera está en la segunda." << endl;
	cout<<("")<< endl;
	int f, c, g, v, Cont, NM, NM2;
	int M[4][5], D[4][5];
	cout<<("Digite 20 numeros enteros para la primera matriz.")<<endl;
	for(int f=0;f<=3;f+=1)
	{
		for(int c=0;c<=4;c+=1)
		{
			cin>>M[f][c];
		}
	}
	cout<<("Digite 20 numeros enteros para la segunda matriz.")<<endl;
	for(int g=0;g<=3;g+=1)
	{
		for(int v=0;v<=4;v+=1)
		{
			cin>>D[g][v];
		}
	}
	NM=0;
	for(int f=0;f<=3;f+=1)
	{
		for(int c=0;c<=4;c+=1)
		{
			if(M[f][c]>NM)
			{
				NM=M[f][c];
			}
		}
	}
	NM2=0;
	for(int g=0;g<=3;g+=1)
	{
		for(int v=0;v<=4;v+=1)
		{
			if(D[g][v]>NM2)
			{
				NM2=D[g][v];
			}
		}
	}
	if(NM==NM2)
	{
		cout<<("El numero mayor es : ")<<NM2<<(" Y esta almacenado en las dos matrices.")<<endl;
	}
	else
	{
		cout<<("No coinciden los numeros mayores.")<<endl;
	}
	system("PAUSE");
}
//12m
void comp_2mat_mayor2()
{
	system("cls");
	cout << "   12. Determinar si el número mayor de una de una es igual al número mayor de la otra." << endl;
	cout<<("")<< endl;
	int f, c, g, v, Cont, NM, NM2;
	int M[4][5], D[4][5];
	cout<<("Digite 20 numeros enteros para la primera matriz.")<<endl;
	for(int f=0;f<=3;f+=1)
	{
		for(int c=0;c<=4;c+=1)
		{
			cin>>M[f][c];
		}
	}
	cout<<("Digite 20 numeros enteros para la segunda matriz.")<<endl;
	for(int g=0;g<=3;g+=1)
	{
		for(int v=0;v<=4;v+=1)
		{
			cin>>D[g][v];
		}
	}
	NM=0;
	for(int f=0;f<=3;f+=1)
	{
		for(int c=0;c<=4;c+=1)
		{
			if(M[f][c]>NM)
			{
				NM=M[f][c];
			}
		}
	}
	NM2=0;
	for(int g=0;g<=3;g+=1)
	{
		for(int v=0;v<=4;v+=1)
		{
			if(D[g][v]>NM2)
			{
				NM2=D[g][v];
			}
		}
	}
	if(NM==NM2)
	{
		cout<<("El numero mayor es : ")<<NM2<<(" Y esta almacenado en las dos matrices.")<<endl;
	}
	else
	{
		cout<<("No coinciden los numeros mayores.")<<endl;
	}
	system("PAUSE");
}
//13m
void comp_mat_pos_exact()
{
	system("cls");
	cout << "   13. Determinar si el número mayor de una se encuentra en la misma posición exacta en la otra." << endl;
	cout<<("")<< endl;
	int f, c, g, v, NM, NM2, VM, GM, FM, CM;
	int M[4][6], D[4][6];
	cout<<("Digite 24 numeros enteros para la primera matriz.")<<endl;
	for(int f=0;f<=3;f+=1)
	{
		for(int c=0;c<=5;c+=1)
		{
			cin>>M[f][c];
		}
	}
	cout<<("Digite 24 numeros enteros para la segunda matriz.")<<endl;
	for(int g=0;g<=3;g+=1)
	{
		for(int v=0;v<=5;v+=1)
		{
			cin>>D[g][v];
		}
	}
	NM=0;
	for(int f=0;f<=3;f+=1)
	{
		for(int c=0;c<=5;c+=1)
		{
			if(M[f][c]>=NM)
			{
				NM=M[f][c];
				FM=f;
				CM=c;
			}
		}
	}
	NM2=0;
	for(int g=0;g<=3;g+=1)
	{
		for(int v=0;v<=5;v+=1)
		{
			if(D[g][v]>=NM2)
			{
				NM2=D[g][v];
				GM=g;
				VM=v;
			}
		}
	}
	if(FM==GM and CM==VM)
	{
		cout<<("Los numeros mayores coinciden en la fila: ")<<GM+1<<(" Y la columna : ")<<VM+1<<endl;
	}
	else
	{
		cout<<("Los numeros no coinciden.")<<endl;
	}
	system("PAUSE");
}
//14m
void comp_mat_prom()
{
	system("cls");
	cout << "   14. Determinar si el promedio de las “esquinas” de una es igual al de las “esquinas” de la otra." << endl;
	cout<<("")<< endl;
	int f, c, g, v, S1, S2;
	double Prom1, Prom2;
	int M[4][6], D[4][6];
	cout<<("Digite 24 numeros enteros para la primera matriz.")<<endl;
	for(int f=0;f<=3;f+=1)
	{
		for(int c=0;c<=5;c+=1)
		{
			cin>>M[f][c];
		}
	}
	cout<<("Digite 24 numeros enteros para la segunda matriz.")<<endl;
	for(int g=0;g<=3;g+=1)
	{
		for(int v=0;v<=5;v+=1)
		{
			cin>>D[g][v];
		}
	}
	S1=0;
	for(int f=0;f<=3;f+=1)
	{
		for(int c=0;c<=5;c+=1)
		{
			S1=(S1+M[f][c]);
			Prom1=(S1/((f+1)*(c+1)));
		}
	}
	S2=0;
	for(int g=0;g<=3;g+=1)
	{
		for(int v=0;v<=5;v+=1)
		{
			S2=(S2+D[g][v]);
			Prom2=(S2/((g+1)*(v+1)));
		}
	}
	if(Prom1==Prom2)
	{
		cout<<("Los promedios de las matrices son iguales : ")<<Prom1<<endl;
	}
	else
	{
		cout<<("Los promedios de las matrices no son iguales.")<<endl;
	}
	system("PAUSE");
}
//15m
void comp_mat_prom_diad()
{
	system("cls");
	cout << "   15. Determinar si el promedio de los elementos de la diagonal de una es igual al de los de la diagonal de la otra." << endl;
	cout<<("")<< endl;
	int f, c, g, v, Diag;
	double Prom1, Prom2;
	int M[5][5], D[5][5];
	cout<<("Digite 25 numeros enteros para la primera matriz.")<<endl;
	for(int f=0;f<=4;f+=1)
	{
		for(int c=0;c<=4;c+=1)
		{
			cin>>M[f][c];
		}
	}
	cout<<("Digite 25 numeros enteros para la segunda matriz.")<<endl;
	for(int g=0;g<=4;g+=1)
	{
		for(int v=0;v<=4;v+=1)
		{
			cin>>D[g][v];
		}
	}
	Diag=0;
		for(int f=0;f<=4;f+=1)
	{
		for(int c=0;c<=4;c+=1)
		{
			Diag=Diag+M[f][c];
			f=f+1;
			Prom1=Diag/(c+1);
		}
	}
	Diag=0;
	for(int g=0;g<=4;g+=1)
	{
		for(int v=0;v<=4;v+=1)
		{
			Diag=Diag+D[g][v];
			g=g+1;
			Prom2=Diag/(v+1);
		}
	}
	if(Prom1==Prom2)
	{
		cout<<("Los promedios de las diagonales son iguales : ")<<Prom1<<endl;
	}
	else
	{
		cout<<("No son iguales los promedios de las diagonales.")<<endl;
	}
	system("PAUSE");
}
