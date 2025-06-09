//4.1 Sistema de Gerenciamento de Funcion�rios

#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Funcionario {
		public:
    	string nome;
    	int id;
    	double salario;
    	string departamento;

    	Funcionario(string n, int i, double s, string d) {
        nome = n;
        id = i;
        salario = s;
        departamento = d;
    }

    void imprimir() {

        cout << "ID: " << id << ", Nome: " << nome << ", Sal�rio: R$ " << salario << ", Departamento: " << departamento << endl;
    }
};

class GerenciadorFuncionarios {
	private:
    vector<Funcionario> funcionarios;

	public:
void cadastrarFuncionario(const Funcionario& f) {
        funcionarios.push_back(f);
    }

    double totalSalariosPorDepartamento(const string& depto) {
    double total = 0;
    for (size_t i = 0; i < funcionarios.size(); i++) {
        if (funcionarios[i].departamento == depto) {
            total += funcionarios[i].salario;
        }
    }
    return total;
}


void listarFuncionarios() {
    if (funcionarios.empty()) {
        cout << "Nenhum funcion�rio cadastrado\n";
        return;
    }
    cout << "\nLista de Funcion�rios:\n";
    for (size_t i = 0; i < funcionarios.size(); i++) {
        funcionarios[i].imprimir();
    	}
	}
};

int main() {
	setlocale(LC_ALL, "Portuguese");
    GerenciadorFuncionarios gerenciador;
    int opcao;

    do {
        cout << "\n--- Sistema de Gerenciamento de Funcion�rios ---\n\n";
        cout << "1 - Cadastrar funcion�rio\n";
        cout << "2 - Calcular total de sal�rios por departamento\n";
        cout << "3 - Listar todos os funcion�rios\n";
        cout << "4 - Sair\n";
        cout << "Escolha uma op��o: ";
        cin >> opcao;

        if (opcao == 1) {
            string nome, departamento;
            int id;
            double salario;

            cout << "Digite o nome: ";
            cin.ignore();
            getline(cin, nome);

            cout << "Digite o ID: ";
            cin >> id;

            cout << "Digite o sal�rio: ";
            cin >> salario;

            cout << "Digite o departamento: ";
            cin.ignore();
            getline(cin, departamento);

            Funcionario f(nome, id, salario, departamento);
            gerenciador.cadastrarFuncionario(f);

            cout << "Funcion�rio cadastrado com sucesso!\n";

        } else if (opcao == 2) {
            string depto;
            cout << "Digite o nome do departamento: ";
            cin.ignore();
            getline(cin, depto);

            double total = gerenciador.totalSalariosPorDepartamento(depto);
            cout << "Total de sal�rios no departamento " << depto << ": R$ " << total << endl;

        } else if (opcao == 3) {
            gerenciador.listarFuncionarios();

        } else if (opcao == 4) {
            cout << "Saindo do sistema...\n";
        } else {
            cout << "Op��o inv�lida, tente novamente\n";
        }

    } while (opcao != 4);

    return 0;
}


