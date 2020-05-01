#include <iostream>
#include <cstdlib>
#include <ctime>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(int argc, char** argv) {
	//que
	int numeroIngresado, factores=0, suma=4, primo1=0, primo2=0;
	bool flagSuma=false;
	
	cout << "Ingrese un numero: ";
	cin >> numeroIngresado;
	

	
	if(numeroIngresado < 100){
		int numeroRandom;
		srand((unsigned)time(0));
		
		while(flagSuma == false && suma<= numeroIngresado){
			bool flagPrimo1=false, flagPrimo2 = false;
			
			while(flagPrimo1 == false){
				numeroRandom = rand() % numeroIngresado;
				int avanzador=1;
				int factores = 0;
				
				while(avanzador<=numeroRandom){
						
					if(numeroRandom % avanzador == 0){
						factores++;
					}
					avanzador++;
					
				}
				if(factores == 2){
					primo1 = numeroRandom;
					flagPrimo1 = true;
				}
			}
			
			while(flagPrimo2 == false){
				numeroRandom = rand() % numeroIngresado;
				int avanzador=1;
				int factores = 0;
				
				while(avanzador<=numeroRandom){
						
					if(numeroRandom % avanzador == 0){
						factores++;
					}
					avanzador++;
					
				}
				if(factores == 2){
					primo2 = numeroRandom;
					flagPrimo2 = true;
					
				}
			}
			if(primo1 + primo2 == suma){
				cout << primo1 << " + " << primo2 << " = " << suma<< endl;
				suma = suma + 2;
			}

			if(suma == (numeroIngresado+2)){
				flagSuma = true;
			}
				
		}	
	}
	else{
		cout << "Debe ser menor que 100. Gracias";
	}
		return 0;
}
