//2.1 Maior e Menor Elemento em uma Matriz

#include <iostream>

using namespace std;

const int maxLinhas = 10;
const int maxColunas = 10;

class Matriz {
		public:
    		int dados[maxLinhas][maxColunas];
    		int linhas;
    		int colunas;

void definirTamanho(int m, int n) {
        if (m <= maxLinhas && n <= maxColunas) {
            linhas = m;
            colunas = n;
        } else {
            cout << "Tamanho máximo permitido é 10x10.\n";
            linhas = colunas = 0;
        }
    }

void preencher() {
        cout << "\nDigite os elementos da matriz (" << linhas << "x" << colunas << "):\n";
        for (int i = 0; i < linhas; i++) {
            for (int j = 0; j < colunas; j++) {
                cout << "Elemento [" << i << "][" << j << "]: ";
                cin >> dados[i][j];
            }
        }
    }

void encontrarMaiorMenor() {
        if (linhas == 0 || colunas == 0) {
            cout << "Matriz inválida!\n";
            return;
        }

        int maior = dados[0][0];
        int menor = dados[0][0];

        for (int i = 0; i < linhas; i++) {
            for (int j = 0; j < colunas; j++) {
                if (dados[i][j] > maior) maior = dados[i][j];
                if (dados[i][j] < menor) menor = dados[i][j];
            }
        }

        cout << "\nMaior elemento: " << maior << endl;
        cout << "Menor elemento: " << menor << endl;
    }
};

int main() {
	setlocale(LC_ALL, "Portuguese");
	
    Matriz matriz;
    
    cout << "--- Matriz ---\n\n";
    cout << "Informe o número de linhas (máx 10): ";
    cin >> matriz.linhas;
    cout << "Informe o número de colunas (máx 10): ";
    cin >> matriz.colunas;

    matriz.definirTamanho(matriz.linhas, matriz.colunas);
    matriz.preencher();
    matriz.encontrarMaiorMenor();

    return 0;
}

