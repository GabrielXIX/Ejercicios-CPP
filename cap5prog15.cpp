#include <iostream>
#include <stdio.h>
#include <conio.h>

/*
Capitulo 5, problema 15

El conjunto de n�meros que aparece con frecuencia en importancia en
probabilidad y an�lisis es N factorial(N!):

N! = 1 x 2 x 3 x 4 x 5 x ... x (N - 1) x N
*/

//@Author	GabrielXIX (Due�as Nu�ez Alan Gabriel 19211630)
//@Date		23 marzo 2022

using namespace std;

class Factorial {
	
	public:
		int calcularFactorial(int n){ //funci�n recursiva
			
			//caso base
			if(n == 1){
				return 1;
			}
			else{
				return n * calcularFactorial(n - 1);
			}			
		}	
};


int main(){
	
	long int num = 0;
	
	printf("<<C%clculo de factoriales>>", 160);
	printf("\n\nIngrese un n%cmero para determinar su factorial y"
	"\nlos factoriales de sus n%cmeros anteriores: ", 163, 163);
	cin >> num;
	
	Factorial obj;
	
	//Los factoriales de el 13 en adelante son muy grandes y el 
	//programa tiene problemas
	for(int i = num; i > 0; i--){
		cout<< "\nFactorial de "<< i<<": "<<obj.calcularFactorial(i);
	}
	
	cout <<"\n\nPresione Enter para salir del programa...";
	
	getch();
	
	return 0;
}
