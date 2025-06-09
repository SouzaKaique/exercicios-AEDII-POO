//2.2 Soma das Diagonais de uma Matriz Quadrada

#include <iostream>
using namespace std;

class MatrizQuadrada {
		private:
    	int matriz[10][10];
    	int n;

		public:
    	void definirOrdem(int ordem) {
        if (ordem > 0 && ordem <= 10) {
            n = ordem;
        } else {
            cout << "Ordem inválida! Usando 0.\n";
            n = 0;
        }
    }

void preencher() {
        if (n == 0) return;

        cout << "Digite os elementos da matriz " << n << "x" << n << ":\n";
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cout << "Elemento [" << i << "][" << j << "]: ";
                cin >> matriz[i][j];
            }
        }
    }

int somaDiagonalPrincipal() {
        int soma = 0;
        for (int i = 0; i < n; i++) {
            soma += matriz[i][i];
        }
        return soma;
    }

int somaDiagonalSecundaria() {
        int soma = 0;
        for (int i = 0; i < n; i++) {
            soma += matriz[i][n - 1 - i];
        }
        return soma;
    }
};

int main() {
	setlocale(LC_ALL, "Portuguese");
    MatrizQuadrada matriz;
    int ordem;
	cout << "--- Matriz Diagonais---\n\n";
    cout << "Informe a ordem da matriz quadrada (max 10): ";
    cin >> ordem;

    matriz.definirOrdem(ordem);
    matriz.preencher();

    cout << "Soma da diagonal principal: " << matriz.somaDiagonalPrincipal() << endl;
    cout << "Soma da diagonal secundaria: " << matriz.somaDiagonalSecundaria() << endl;

    return 0;
}


