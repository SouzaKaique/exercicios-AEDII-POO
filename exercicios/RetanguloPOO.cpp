//2.2 Problema �retangulo�

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
        cout << "�rea: " << calcularArea() << endl;
        cout << "Per�metro: " << calcularPerimetro() << endl;
        cout << "Diagonal: " << calcularDiagonal() << endl;
    }
};

int main() {
	setlocale(LC_ALL, "Portuguese");
	
    Retangulo r;

    cout << "Digite a base do ret�ngulo: ";
    cin >> r.base;
    cout << "Digite a altura do ret�ngulo: ";
    cin >> r.altura;

    cout << fixed << setprecision(4);

    r.mostrarResultados();

    return 0;
}

