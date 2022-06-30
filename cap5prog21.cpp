#include <iostream>
#include <stdio.h>
#include <conio.h>

/*
Capitulo 5, problema 21

Se tiran dos dados hasta que aparezca un 3 o un 7. ¿Durante qué porcentaje de veces
saldrá un 3 antes de aparecer un 7?
*/

//@Author	GabrielXIX (Dueñas Nuñez Alan Gabriel 19211630)
//@Date		24 marzo 2022

using namespace std;

int main(){
	
	float combinaciones = 21.0f;
	float prob1 = 1.0f/combinaciones; //prob de sacar dados que sumen 3
	float prob2 = 3.0f/combinaciones; //prob de sacar dados que sumen 7
	float prob3 = prob1 + prob2; //Prob se sacar dados que sumen 3 o 7
	float prob4 = 1.0f/4.0f; //prob de que salga primero la suma de 3
	
	cout<<"Porcentaje de veces que al lanzar 2 dados sumen 3 antes que 7";
	cout<<"\n\nDada la probabilidad de que al lanzar 2 dados sumen 3 o 7: "<< prob3*100<<"%,\nlos dados sumarian 3 un "<<prob4*100<<"% de las veces";
	cout <<"\n\nPresione Enter para salir del programa...";	
	getch();
	
	return 0;
}
