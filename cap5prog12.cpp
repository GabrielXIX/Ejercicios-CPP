#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <string>
#include <cstdlib>
#include <ctime>

/*
Capitulo 5, problema 12

Simular barajar manos de cinco cartas de una baraja común de 52 cartas.
Cersiorese de no barajar la misma carta dos veces
*/

//@Author	GabrielXIX (Dueñas Nuñez Alan Gabriel 19211630)
//@Date		23 marzo 2022

using namespace std;

class Clase1 {
	
	public:
		void BarajarCartas(){
			
			
			int x = 0;
			int aux = 0;
			int cont = 1;
			srand(time(0));
			int aleatorio;
			
			while(x != 25){ //Se generan 25 cartas diferentes al azar
				
				aux = 0;
				
				aleatorio = 0 + (rand() % 51);
									
					for(int j = 0; j < 25; j++){
						if(manos[j] == aleatorio){
							aux = 1;
						}
					}
										
					if(aux != 1){
						manos[x] = aleatorio;
						x++;						
					}				
			}
			
			for(int i = 0; i < 25; i++){
				
				if(i % 5 == 0){
					cout << "\n\nMano " << cont << ": ";
					cont++;
				}
				cout << cartas[manos[i]] << " - ";
							
			}		
		}
		
		string cartas[52] = {"As Corazones", "2 Corazones", "3 Corazones", "4 Corazones",
		"5 Corazones", "6 Corazones", "7 Corazones", "8 Corazones", "9 Corazones",
		"10 Corazones", "Jack Corazones", "Reina Corazones", "Rey Corazones",
		"As Diamantes", "2 Diamantes", "3 Diamantes", "4 Diamantes",
		"5 Diamantes", "6 Diamantes", "7 Diamantes", "8 Diamantes", "9 Diamantes",
		"10 Diamantes", "Jack Diamantes", "Reina Diamantes", "Rey Diamantes",
		"As Trebol", "2 Trebol", "3 Trebol", "4 Trebol",
		"5 Trebol", "6 Trebol", "7 Trebol", "8 Trebol", "9 Trebol",
		"10 Trebol", "Jack Trebol", "Reina Trebol", "Rey Trebol",
		"As Picas", "2 Picas", "3 Picas", "4 Picas",
		"5 Picas", "6 Picas", "7 Picas", "8 Picas", "9 Picas",
		"10 Picas", "Jack Picas", "Reina Picas", "Rey Picas"};
		
		int manos[25] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
};		


int main(){
	
	cout << "<<Manos de 5 cartas aleatorias no repetidas de una baraja de 52 cartas>>";
	
	Clase1 obj;
	
	obj.BarajarCartas();
	
	cout <<"\n\nPresione Enter para salir del programa...";	
	getch();
	
	return 0;
}





