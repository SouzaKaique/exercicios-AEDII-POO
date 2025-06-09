//2.4 Problema "soma"

#include <iostream>

using namespace std;

class Calculo {
	public: 
	int X, Y, S = 0;

void calcularValores() {
	S = X + Y;
	}
};

int main () {
	setlocale(LC_ALL, "Portuguese");
	
	Calculo valores;
	
	cout << "Digite o valor de X: ";
	cin >> valores.X;
	cout << "Digite o valor de Y: ";
	cin >> valores.Y;
	
	valores.calcularValores();
	
	cout << "\nO valor da soma entre X e Y é: " << valores.S;
	
	return 0;
	
}
