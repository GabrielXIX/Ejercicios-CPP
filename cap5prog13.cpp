#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <iomanip>

/*
Capitulo 5, problema 13

Si se sacan dos cartas de una baraja común de 52 cartas ¿que porcentaje de veces las
cartas serán un as y una cara (rey, reina o caballero)
*/

//@Author	GabrielXIX (Dueñas Nuñez Alan Gabriel 19211630)
//@Date		23 marzo 2022

using namespace std;

int main(){
	
	float p1 = 4.0f/52.0f; //suceso 1, As
	float p2 = 12.0f/51.0f; //suceso 2, Rey, reina o caballero, se resta la carta sacada anteriormente

	//Interseccion dependiente
	float inter = p1 * p2;
	
	cout << "<<Probabilidad de que de una baraja de 52 cartas salga un As y una cara (Rey, reina, caballero)>>";
	cout << "\n\nLa probabilidad de que esto ocurra es de un: " <<fixed<<setprecision(8)<<inter*100<<"%";
	cout <<"\n\nPresione Enter para salir del programa...";	
	getch();
	return 0;
}
