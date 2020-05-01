#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(int argc, char** argv) {
	//que
	int numeroIngresado;
	
	cout << "Ingrese un numero: ";
	cin >> numeroIngresado;
	
	if(numeroIngresado < 100){
		cout << "funciona";
	}
	else{
		cout << "Debe ser menor que 100. Gracias";
	}
	
		return 0;
}
