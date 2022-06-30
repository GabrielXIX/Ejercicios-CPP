#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <cstdlib>
#include <ctime>

/*
Capitulo 5, problema 11

Se lanzan cinco dados. Cualquiera que muestre un 4 se retira y se vuelven
a lanzar los otros. Los cuatro que sangan ahora se retiran y los restantes
vuelven a lanzarse. Este proceso se continúa hasta que todos los dado muestren 
cuatros. En promedio ¿cuántas veces hay que lanzar los dados?
*/

//@Author	GabrielXIX (Dueñas Nuñez Alan Gabriel 19211630)
//@Date		23 marzo 2022

using namespace std;

class Dado {
	
	//Lanzar dado
	public:
	void LanzarDados(){
		
		dados[0] = 1;
		dados[1] = 1;
		dados[2] = 1;
		dados[3] = 1;
		dados[4] = 1;
		
		contador = 0;
			
		//variables auxiliares
		int aux1 = 0;
		int aux2 = 0;
		int aux3 = 0;
		
		cout << "\n";
		
		//cambia la semilla de la funcion rand() dependiendo la hora
		srand(time(0));
		int aleatorio;
			
		while(aux1 == 0){		
			//Verificar si ya no hay dados que lanzar
			if(aux2 == 1 && aux3 == 1){
				
				aux1 = 1;
			}
			else{
				aux2 = 0;
				aux3 = 0;
				
				cout << "\nSe lanzan los dados: ";	
				
				//Lanzar dados
				for(int i = 0; i < 5; i++){
				
					if(dados[i] != 0){
					
					aleatorio = 1 + (rand() % 6);
					
					dados[i] = aleatorio; //aleatorio

					cout << "[" << dados[i] << "]";	
					
					aux2++;								
					}
					
				}
							
				//quitar los dados que cayeron en 4
				for	(int j = 0; j < 5; j++){
				
					if(dados[j] == 4){
						dados[j] = 0;
						aux3++;
					}
				}			
				contador++;
			}									
		}
	}
	
		
	int DespliegueContador(){
			return contador;
	}
	
	void AgregarLanzamientos(){
		
		lanzamientosTotales[bandera] = contador;
		bandera++;
	}
	
	void CalcularPromedio(){
		
		int sum = 0;
		int prom = 0;
		
		for(int i = 0; i < 5; i++){
			sum += lanzamientosTotales[i];
		}
		
		prom = sum / 5;
		
		cout << "\n\nEn promedio hay que lanzar los dados " << prom << " veces";
	}
		
	//Campos privados
	private:
		int dados[5];
		int lanzamientosTotales[5];
		int contador;
		int bandera = 0;
};


int main(){
	
	//variables auxiliares
	int op = 0;
	
	cout << "<<Lanzamientos de Dados>>" << endl;
	
	do{
		//Ciclo para ir lanzando los dados		
		cout << "\nPresione Enter para lanzar los dados hasta que en todos salga un 4...";
		getch();
		
		Dado obj;
		
		for(int i = 0; i < 5; i++){
			obj.LanzarDados();
			cout << "\n\nSe necesitaron " << obj.DespliegueContador() << " lanzamientos para la iteracion " << i + 1 << "";
			obj.AgregarLanzamientos();
			getch();
		}
		
		obj.CalcularPromedio();
		
		op = 1;
		cout << "\n\nPresione Enter para salir del programa...";
		getch();
		
	}
	while(op == 0);
	
	
	return 0;
}
