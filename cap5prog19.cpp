#include <iostream>
#include <stdio.h>
#include <conio.h>

/*
Capitulo 5, problema 19

�Cual es la probabilidad de que un a�o que no sea bisiesto tenga 53 viernes?
*/

//@Author	GabrielXIX (Due�as Nu�ez Alan Gabriel 19211630)
//@Date		24 marzo 2022

using namespace std;

int main(){
	
	//Un a�o de 53 semanas ocurre cada 6 o 5 a�os aproximadamente
	//se tomar� el valor de cada 6 a�os
	
	float suceso1 = 1.0f/6.0f; //prob de que un a�o sea de 53 semanas
	float suceso2 = 3.0f/4.0f; //prob de que un a�o no sea bisiesto
	
	float prob = suceso1 * suceso2;
	
	printf("<<Probabilidad de que un a%co tenga 53 viernes en un ciclo de 6 a%cos>>", 164, 164);
	cout << "\n\nLa probabilidad es de: " << prob * 100<< "%";
	cout <<"\n\nPresione Enter para salir del programa...";	
	getch();
	
	return 0;
}
