// 2.8 Problema �consumo�

#include <iostream>
#include <iomanip>
using namespace std;

class Consumo {
	private:
    double distancia;
    double combustivel;

	public:
void lerDados() {
        cout << "Informe a dist�ncia total percorrida (em Km): ";
        cin >> distancia;

        cout << "Informe o total de combust�vel gasto (em litros): ";
        cin >> combustivel;
    }

    double calcularConsumoMedio() {
        return distancia / combustivel;
    }

    void exibirConsumo() {
        cout << fixed << setprecision(3);
        cout << "\n O consumo m�dio � de: " << calcularConsumoMedio() << " km/l" << endl;
    }
};

int main() {
	setlocale(LC_ALL, "Portuguese");
	
    Consumo carro;
    carro.lerDados();
    carro.exibirConsumo();

    return 0;
}

