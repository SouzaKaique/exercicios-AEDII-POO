// 2.9 Problema �medidas�

#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

class Medidas {
	public:
    double A, B, C;

double areaQuadrado() {
        return A * A;
    }

double areaTriangulo() {
        return (A * B) / 2.0;
    }

double areaTrapezio() {
        return ((A + B) * C) / 2.0;
    }
};

int main() {
	setlocale(LC_ALL, "Portuguese");

    Medidas valores;

    cout << "Digite a medidas de A: ";
    cin >> valores.A;
    cout << "Digite a medidas de B: ";
    cin >> valores.B;
    cout << "Digite a medidas de C: ";
    cin >> valores.C;

    cout << fixed << setprecision(4);
    cout << "\n�rea do quadrado: " << valores.areaQuadrado() << endl;
    cout << "�rea do tri�ngulo: " << valores.areaTriangulo() << endl;
    cout << "�rea do trap�zio: " << valores.areaTrapezio() << endl;

    return 0;
}

