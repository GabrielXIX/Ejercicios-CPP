#include <iostream>
#include <stdio.h>
#include <conio.h>

/*
Capitulo 5, problema 20

Una compañia fabrica pernos. Se sabe que uno en 1000 es defectuoso. Usted compra una caja
con 100 pernos. ¿Cual es la probabilidad de que adquiera uno defectuoso
*/

//@Author	GabrielXIX (Dueñas Nuñez Alan Gabriel 19211630)
//@Date		24 marzo 2022

using namespace std;

int main(){
	
	
	float probBase = 1.0f/1000.0f;
	float probFinal = probBase * 100; //regla de 3
	
	cout << "<<Probabilidad de adquirir un perno defectuoso de 100 cuando 1 de cada 1000 salen defectuosos>>";
	cout <<"\n\nLa probabilidad es de: " << probFinal * 100 << "%";
	cout <<"\n\nPresione Enter para salir del programa...";	
	getch();
	
	return 0;
}
