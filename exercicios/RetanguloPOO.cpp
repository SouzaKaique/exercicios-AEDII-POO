//2.2 Problema “retangulo”

#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

class Retangulo {
	public:
    float base;
    float altura;

float calcularArea() {
        return base * altura;
    }

float calcularPerimetro() {
        return 2 * (base + altura);
    }

float calcularDiagonal() {
        return sqrt(base * base + altura * altura);
    }

void mostrarResultados() {
        cout << "Área: " << calcularArea() << endl;
        cout << "Perímetro: " << calcularPerimetro() << endl;
        cout << "Diagonal: " << calcularDiagonal() << endl;
    }
};

int main() {
	setlocale(LC_ALL, "Portuguese");
	
    Retangulo r;

    cout << "Digite a base do retângulo: ";
    cin >> r.base;
    cout << "Digite a altura do retângulo: ";
    cin >> r.altura;

    cout << fixed << setprecision(4);

    r.mostrarResultados();

    return 0;
}

