//2.6 Problema "cícrulo"

#include <iostream>
#include <iomanip> 

using namespace std;

class Circulo {
	public:
    float raio;

float calcularArea() {
        const float PI = 3.14159;
        return PI * raio * raio;
    }
};

int main() {
	setlocale(LC_ALL, "Portuguese");

    Circulo c;

    cout << "Digite o valor do raio: ";
    cin >> c.raio;

    double area = c.calcularArea();

    cout << fixed << setprecision(3);
    cout << "\nÁrea do círculo: " << area << endl;

    return 0;
}

