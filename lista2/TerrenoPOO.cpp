//2.1 Problema “terreno”

#include <iostream>

using namespace std;

class Terreno {
	public:
    float largura;
    float comprimento;
    float valorMetro;

float calcularArea() {
        	return largura * comprimento;
    }

float calcularPreco() {
        return calcularArea() * valorMetro;
    }

void mostrarInformacoes() {
        cout << "Área do terreno: " << calcularArea() << " metros quadrados" << endl;
        cout << "Preço do terreno: R$ " << calcularPreco() << endl;
    }
};

int main() {
	setlocale(LC_ALL, "Portuguese");
	
    Terreno terreno;

    cout << "Digite a largura do terreno: ";
    cin >> terreno.largura;

    cout << "Digite o comprimento do terreno: ";
    cin >> terreno.comprimento;

    cout << "Digite o valor do metro quadrado: ";
    cin >> terreno.valorMetro;

    terreno.mostrarInformacoes();

    return 0;
}

