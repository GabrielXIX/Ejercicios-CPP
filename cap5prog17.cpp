#include <iostream>
#include <stdio.h>
#include <conio.h>

/*
Capitulo 5, problema 17

Determinar la probabilidad de que un numero entre 2 y 100 sea primo
*/

//@Author	GabrielXIX (Dueñas Nuñez Alan Gabriel 19211630)
//@Date		23 marzo 2022

using namespace std;

class Primos {
	
	public:
		bool numeroPrimo(int num) {
			
  			//Verifica si es primo o no, si es primo retorna true
  			if (num == 4) return false;
  			
  			for (int x = 2; x < num / 2; x++) {
  					
    			if (num % x == 0) return false;
  			}
  			
  			// No se pudo dividir entinces es primo
  			return true;
		}
	
};

int main(){
	
	int contador = 0;
	
	Primos obj;
	
	//Ciclo para saber cuantos num primos hay de 2 a 100
	for(int i = 2; i < 101; i++){
		
		if(obj.numeroPrimo(i)){
			contador++;
		}		
	}
	
	//Existen 25 numeros primos entre 2 y 100 (99 numeros en total)
	//Entonces
	float p1 = contador/99.0f;	
	
	cout << "<<Probabilidad de que un numero entre 2 y 100 sea primo>>\n";
	cout << "\nLa probabilidad es de: 25/99 o " << p1 * 100<< "%";
	cout <<"\n\nPresione Enter para salir del programa...";	
	getch();
	
	
	return 0;
}
