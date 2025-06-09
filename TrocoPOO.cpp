//2.5  Problema “troco”

#include <iostream>

using namespace std;

class Troco {
	public:
    float precoUnitario;
    int quantidade;
    float valorPago;

float calcularTroco() {
        float total = precoUnitario * quantidade;
        return valorPago - total;
    }
};

int main() {
	setlocale(LC_ALL, "Portuguese");
	
    Troco venda;

    cout << "Preço unitário do produto: ";
    cin >> venda.precoUnitario;
    cout << "Quantidade comprada: ";
    cin >> venda.quantidade;
    cout << "Dinheiro recebido pelo cliente: ";
    cin >> venda.valorPago;

    double troco = venda.calcularTroco();

    cout << "\nTroco = " << troco << endl;

    return 0;
}

