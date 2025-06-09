//4.2 Agenda de Contatos

#include <iostream>
#include <string>

using namespace std;

class Contato {
	public:
    string nome;
    string telefone;
    string email;

void imprimir() {
        cout << "Nome: " << nome << endl;
        cout << "Telefone: " << telefone << endl;
        cout << "Email: " << email << endl;
    }
};

int main() {
	setlocale(LC_ALL, "Portuguese");
    Contato agenda[10];
    int totalContatos = 0;

    int opcao;

    do {
        cout << "\n--- Agenda de Contatos ---\n\n";
        cout << "1 - Adicionar contato\n";
        cout << "2 - Listar todos os contatos\n";
        cout << "3 - Buscar contato por nome\n";
        cout << "4 - Sair\n";
        cout << "Escolha uma opção: ";
        cin >> opcao;
        cin.ignore(); 

        if (opcao == 1) {
            if (totalContatos >= 10) {
                cout << "Agenda cheia!\n";
            } else {
                Contato c;
                cout << "Digite o nome: ";
                getline(cin, c.nome);

                cout << "Digite o telefone: ";
                getline(cin, c.telefone);

                cout << "Digite o email: ";
                getline(cin, c.email);

                agenda[totalContatos] = c;
                totalContatos++;
                cout << "Contato adicionado com sucesso!\n";
            }

        } else if (opcao == 2) {
            if (totalContatos == 0) {
                cout << "Nenhum contato cadastrado.\n";
            } else {
                cout << "\nLista de Contatos:\n";
                for (int i = 0; i < totalContatos; i++) {
                    cout << "Contato " << (i + 1) << ":\n";
                    agenda[i].imprimir();
                    cout << "-----------------\n";
                }
            }

        } else if (opcao == 3) {
            if (totalContatos == 0) {
                cout << "Nenhum contato cadastrado.\n";
            } else {
                string nomeBusca;
                cout << "Digite o nome para buscar: ";
                getline(cin, nomeBusca);

                bool encontrado = false;
                for (int i = 0; i < totalContatos; i++) {
                    if (agenda[i].nome == nomeBusca) {
                        cout << "Contato encontrado:\n";
                        cout << "Telefone: " << agenda[i].telefone << endl;
                        cout << "Email: " << agenda[i].email << endl;
                        encontrado = true;
                        break;
                    }
                }

                if (!encontrado) {
                    cout << "Contato não encontrado\n";
                }
            }

        } else if (opcao == 4) {
            cout << "Encerrando o programa...\n";

        } else {
            cout << "Opção inválida, tente novamente.\n";
        }

    } while (opcao != 4);

    return 0;
}

