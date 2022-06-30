#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <cstdlib>
#include <ctime>

/*
Capitulo 5, problema 16

Generar 100 d�as de estado de tiempo en el pa�s de las Maravillas,
por simulaci�n. Por ejemplo, si hoy llueve, generar un n�mero aleatorio
X; si X = 1, llover� nuevamente; si X = 2, har� buen tiempo, si no es
as�, nevar�. Calcular los d�as de cada clase de tiempo y comparar los
resultados con las probabilidades l�mites
*/

//@Author	GabrielXIX (Due�as Nu�ez Alan Gabriel 19211630)
//@Date		23 marzo 2022

using namespace std;


int main(){
	
	srand(time(0));
	int aleatorio = 0;
	int soleado = 0;
	int lluvia = 0;
	int nieve = 0;
	
	cout<<"<<Generar 100 dias con diferentes estados de tiempo>>";	
	cout <<"\n\nPresione Enter para generar 100 dias con estados de tiempo al azar (Lluvia(L), Soleado(S), Nevando(N))...";	
	
	getch();
	
	cout <<"\n\n";
	
	for(int i = 0; i < 100; i++){
		
		aleatorio = 1 + (rand() % 3);
		
		if(aleatorio == 1){
			lluvia++;
			cout<<"L";
		}
		else if(aleatorio == 2){
			soleado++;
			cout<<"S";
		}
		else if(aleatorio == 3){
			nieve++;
			cout<<"N";
		}		
	}
	
	cout <<"\n\n";
	cout <<"Dias que fueron soleados: "<<soleado<<", "<<soleado<<"% de las veces";
	cout <<"\nDias que fueron lluviosos: "<<lluvia<<", "<<lluvia<<"% de las veces";
	cout <<"\nDias que fueron de nieve: "<<nieve<<", "<<nieve<<"% de las veces";
	
	cout <<"\n\nProbabilidad de que todos los dias sean soleados o lluviosos o con nieve: 1.94 x 10^(-46)";
	cout <<"\n\nPresione Enter para salir del programa...";	
	getch();
	
	return 0;
}
