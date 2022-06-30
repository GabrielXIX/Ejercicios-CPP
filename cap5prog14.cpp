#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <cstdlib>
#include <ctime>

/*
Capitulo 5, problema 14

Descripcion
*/

//@Author	GabrielXIX (Dueñas Nuñez Alan Gabriel 19211630)
//@Date		23 marzo 2022

using namespace std;

class Ruleta {
	
	
	public:
		void giros(){
			
			cout <<"\n\n";
			
			srand(time(0));
			int aleatorio;
			
			for(int i = 0; i < 1000; i++){
				
				aleatorio = 0 + (rand() % 36);
				
				if(aleatorio % 2 != 0){
					contador++;
				}
				
				cout<< "["<<aleatorio<<"]";
			}			
		}
		
		float contador = 0.0f;	
};


int main(){
	
	Ruleta obj;
	
	cout<<"<<1000 Giros de una ruleta>>";
	cout<<"\n\nPresione Enter para comenzar...";
	
	getch();
	
	obj.giros();
	
	cout<<"\n\nAl simular giros de ruleta, "<<obj.contador<<" de 1000 cayeron en impares, es decir, un "<<obj.contador/1000.0f*100<<"% de las veces";
	cout <<"\n\nPresione Enter para salir del programa...";	
	getch();
	
	return 0;
}
