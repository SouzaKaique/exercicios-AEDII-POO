//2.3 Problema “idades”

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

class Pessoa {
	public:
    string nome;
    int idade;

void lerDados() {
        cout << "Nome: ";
        getline(cin, nome);
        cout << "Idade: ";
        cin >> idade;
        cin.ignore();
    }
};

class Calculadora {
		public:
    	static double calcularMedia(int idade1, int idade2) {
        return (idade1 + idade2) / 2.0;
    }
};

int main() {
	setlocale(LC_ALL, "Portuguese");
	
    Pessoa p1, p2;

    cout << "Dados da primeira pessoa:\n";
    p1.lerDados();
	cout << "\n==================\n";
    cout << "\nDados da segunda pessoa:\n";
    p2.lerDados();

    double media = Calculadora::calcularMedia(p1.idade, p2.idade);

    cout << fixed << setprecision(1);
    cout << "\nA idade média de " << p1.nome << " e " << p2.nome << " é de " << media << " anos.\n";

    return 0;
}

