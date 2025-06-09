// 2.8 Problema “consumo”

#include <iostream>
#include <iomanip>
using namespace std;

class Consumo {
	private:
    double distancia;
    double combustivel;

	public:
void lerDados() {
        cout << "Informe a distância total percorrida (em Km): ";
        cin >> distancia;

        cout << "Informe o total de combustível gasto (em litros): ";
        cin >> combustivel;
    }

    double calcularConsumoMedio() {
        return distancia / combustivel;
    }

    void exibirConsumo() {
        cout << fixed << setprecision(3);
        cout << "\n O consumo médio é de: " << calcularConsumoMedio() << " km/l" << endl;
    }
};

int main() {
	setlocale(LC_ALL, "Portuguese");
	
    Consumo carro;
    carro.lerDados();
    carro.exibirConsumo();

    return 0;
}

