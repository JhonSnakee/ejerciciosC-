//Elaborar un programa que sirva para el manejo de administracion de votaciones (4 Cantidatos)
//Jhon Alejandro Murillo Diaz.
//Ficha: 1752634
#include<iostream>
#include<cmath>
#include<cstdlib>
#include <stdio.h>
#include <wchar.h>
#include <locale.h>
#include <stdlib.h>
using namespace std;

int main ()
{
	system("cls");
	int op, I, G, H, S, B, PSW, PSWW;
	I=0;
	G=0;
	H=0;
	S=0;
	PSWW=1998;
	do
	{
		system("cls");
		cout<<"Eliga el candidato a votar : ."<<endl;
		cout<<""<<endl;
		cout<<"1. Ivan Duque."<<endl;
		cout<<"2. Gustavo Petro."<<endl;
		cout<<"3. Humberto de la Calle."<<endl;
		cout<<"4. Sergio Fajardo."<<endl;
		cout<<"5. Voto en Blanco."<<endl;
		cout<<"6. Resultados."<<endl;
		cout<<""<<endl;
		cout<<""<<endl;
		cout<<"Opcion : "<<endl;
		cin>>op;
		if(op>=1 and op<=6)
		{
			if(op==1)
			{
				system("cls");
				I=I+1;
				cout<<("El candidato Ivan Duque tiene : ")<<I<<(" ")<<("Votos.")<<endl;
				cout<<""<<endl;
				system("PAUSE");
			}
			else
			{
				if(op==2)
				{
					system("cls");
					G=G+1;
					cout<<("El candidato Gustavo Petro tiene : ")<<G<<(" ")<<("Votos.")<<endl;
					cout<<""<<endl;
					system("PAUSE");
				}
				else
				{
					if(op==3)
					{
						system("cls");
						H=H+1;
						cout<<("El candidato Humberto de la Calle tiene : ")<<H<<(" ")<<("Votos.")<<endl;
						cout<<""<<endl;
						system("PAUSE");
					}
					else
					{
						if(op==4)
						{
							system("cls");
							S=S+1;
							cout<<("El candidato Sergio Fajardo tiene : ")<<S<<(" ")<<("Votos.")<<endl;
							cout<<""<<endl;
							system("PAUSE");
						}
						else
						{
							if(op==5)
							{
								system("cls");
								B=B+1;
								cout<<("El Voto en Blanco tiene : ")<<B<<(" ")<<("Votos.")<<endl;
								cout<<""<<endl;
								system("PAUSE");
							}
							else
							{
								if(op==6)
								{
									cout<<("Para ver los resultados ingrese la contraseña : ")<<endl;
									cout<<""<<endl;
									cin>>PSW;
									if(PSW==PSWW)
									{
									
										if(I>G and I>H and I>S and I>=B)
										{
											system("cls");
											cout<<("El candidato ganador es Ivan Duque.")<<endl;
											cout<<("Votos para Ivan Duque :           ")<<I<<endl;
											cout<<("Votos para Gustavo Petro :        ")<<G<<endl;
											cout<<("Votos para Humberto de la Calle : ")<<H<<endl;
											cout<<("Votos para Sergio Fajardo :       ")<<S<<endl;
											cout<<("Votos para Voto en Blanco :       ")<<B<<endl;
											system("PAUSE");					
											cout<<"================================================"<<endl;
											cout<<"|   Gracias por usar mi sistema de votacion.   |"<<endl;
											cout<<"|      Desarrollado por Jhon Murillo.          |"<<endl;
											cout<<"================================================"<<endl;									
										}
										else
										{
											if(G>I and G>H and G>S and G>=B)
											{
												system("cls");
												cout<<("El candidato ganador es Gustavo Petro.")<<endl;
												cout<<("Votos para Gustavo Petro :        ")<<G<<endl;
												cout<<("Votos para Ivan Duque :           ")<<I<<endl;
												cout<<("Votos para Humberto de la Calle : ")<<H<<endl;
												cout<<("Votos para Sergio Fajardo :       ")<<S<<endl;
												cout<<("Votos para Voto en Blanco :       ")<<B<<endl;
												system("PAUSE");
												cout<<"================================================"<<endl;
												cout<<"|   Gracias por usar mi sistema de votacion.   |"<<endl;
												cout<<"|      Desarrollado por Jhon Murillo.          |"<<endl;
												cout<<"================================================"<<endl;
											}
											else
											{
												if(H>I and H>G and H>S and H>=B)
												{
													system("cls");
													cout<<("El candidato ganador es Humberto de la Calle..")<<endl;
													cout<<("Votos para Humberto de la Calle : ")<<H<<endl;
													cout<<("Votos para Gustavo Petro :        ")<<G<<endl;
													cout<<("Votos para Ivan Duque :           ")<<I<<endl;
													cout<<("Votos para Sergio Fajardo :       ")<<S<<endl;
													cout<<("Votos para Voto en Blanco :       ")<<B<<endl;
													system("PAUSE");
													cout<<"================================================"<<endl;
													cout<<"|   Gracias por usar mi sistema de votacion.   |"<<endl;
													cout<<"|      Desarrollado por Jhon Murillo.          |"<<endl;
													cout<<"================================================"<<endl;
												}
												else
												{
													if(S>I and S>G and S>H and S>=B)
													{
														system("cls");
														cout<<("El candidato ganador es Sergio Fajardo.")<<endl;
														cout<<("Votos para Sergio Fajardo :       ")<<S<<endl;
														cout<<("Votos para Humberto de la Calle : ")<<H<<endl;
														cout<<("Votos para Gustavo Petro :        ")<<G<<endl;
														cout<<("Votos para Ivan Duque :           ")<<I<<endl;
														cout<<("Votos para Voto en Blanco :       ")<<B<<endl;
														system("PAUSE");
														cout<<"================================================"<<endl;
														cout<<"|   Gracias por usar mi sistema de votacion.   |"<<endl;
														cout<<"|      Desarrollado por Jhon Murillo.          |"<<endl;
														cout<<"================================================"<<endl;
													}
													else
													{
														if(B>I and B>G and B>H and B>S)
														{
															system("cls");
															cout<<("El Voto en Blanco tiene la mayoria de votos.")<<endl;
															cout<<("Votos para Voto en Blanco :       ")<<B<<endl;
															cout<<("Votos para Sergio Fajardo :       ")<<S<<endl;
															cout<<("Votos para Humberto de la Calle : ")<<H<<endl;
															cout<<("Votos para Gustavo Petro :        ")<<G<<endl;
															cout<<("Votos para Ivan Duque :           ")<<I<<endl;
															system("PAUSE");
															cout<<"================================================"<<endl;
															cout<<"|   Gracias por usar mi sistema de votacion.   |"<<endl;
															cout<<"|      Desarrollado por Jhon Murillo.          |"<<endl;
															cout<<"================================================"<<endl;
														}
														else
														{
															if(I==G or I==H or I==S or G==I or G==H or G==S or H==I or H==G or H==S or S==I or S==G or S==H)
															{
																system("cls");
																cout<<("Es un empate.")<<endl;
																cout<<("Votos para Ivan Duque :           ")<<I<<endl;
																cout<<("Votos para Gustavo Petro :        ")<<G<<endl;
																cout<<("Votos para Humberto de la Calle : ")<<H<<endl;
																cout<<("Votos para Sergio Fajardo :       ")<<S<<endl;
																cout<<("Votos para Voto en Blanco :       ")<<B<<endl;
																system("PAUSE");
																cout<<"================================================"<<endl;
																cout<<"|   Gracias por usar mi sistema de votacion.   |"<<endl;
																cout<<"|      Desarrollado por Jhon Murillo.          |"<<endl;
																cout<<"================================================"<<endl;
															}
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
		else
		{
			cout<<"Opcion no valida"<<endl;
			system("PAUSE");
		}
	}while(op!=6);
	system("PAUSE");
}
