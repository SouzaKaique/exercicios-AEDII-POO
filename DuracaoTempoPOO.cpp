// 2.10 Problema “duracao"

#include <iostream>


using namespace std;

class Duracao {
	public:
    int totalSegundos;

void lerSegundos() {
        cout << "Digite a duração em segundos: ";
        cin >> totalSegundos;
    }

void exibirTempo() {
        int horas = totalSegundos / 3600;
        int minutos = (totalSegundos % 3600) / 60;
        int segundos = totalSegundos % 60;

        cout << "\nDuração: ";
        cout << horas << ":" << minutos << ":" << segundos << endl;
    }
};

int main() {
	setlocale(LC_ALL, "Portuguese");
	
    Duracao tempo;
    tempo.lerSegundos();
    tempo.exibirTempo();

    return 0;
}

