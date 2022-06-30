#include <iostream>
#include <stdio.h>
#include <conio.h>

/*
Capitulo 5, problema 18

Una clase de ciencias tiene 31 alumnos, de los cuales 18 son muchachas.
Va a seleccionarse al azar un comite de cinco miembros.
¿Cual es la probabilidad de que todos los miembros sean muchachas?
*/

//@Author	GabrielXIX (Dueñas Nuñez Alan Gabriel 19211630)
//@Date		24 marzo 2022

using namespace std;


int main(){
	
	//La probabilidad son intersecciones dependientes entonces
	
	//sucesos
	float p1 = 18.0f/31.0f;
	float p2 = 17.0f/30.0f;
	float p3 = 16.0f/29.0f;
	float p4 = 15.0f/28.0f;
	float p5 = 14.0f/27.0f;
	
	float probabilidad = p1 * p2 * p3 * p4 * p5;
	
	cout << "Probabilidad de que de un grupo de 31 alumnos donde 18 son mujeres"
	<< "\nse seleccione al azar un grupo de 5 mujeres";
	
	cout << "\n\nLa probabilidad es de: " << probabilidad * 100 << "%";
	cout <<"\n\nPresione Enter para salir del programa...";	
	getch();
	
	return 0;
}
