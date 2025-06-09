//2.7 Problema "pagamento"

#include <iostream>
#include <iomanip> 

using namespace std;

class Funcionario {
	public:
    string nome;
    float valorHora;
    int horasTrabalhadas;

float calcularPagamento() {
        return valorHora * horasTrabalhadas;
    }
};

int main() {
	setlocale(LC_ALL, "Portuguese");
	
    Funcionario func;

    cout << "Nome do funcionário: ";
    getline(cin, func.nome);
    cout << "Valor por hora: ";
    cin >> func.valorHora;
    cout << "Horas trabalhadas: ";
    cin >> func.horasTrabalhadas;

    double pagamento = func.calcularPagamento();

    cout << fixed << setprecision(2);
    cout << "\nO pagamento para " << func.nome << " deve ser de: R$ " << pagamento << endl;

    return 0;
}

