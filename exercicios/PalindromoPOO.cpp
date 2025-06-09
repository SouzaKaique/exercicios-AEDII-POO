//1.2 Verificador de Pal�ndromos

#include <iostream>
#include <string>

using namespace std;

class Palindromo {
		public:
    		bool verificar(string texto) {
        	string limpa = "";

        for (int i = 0; i < texto.length(); i++) {
            char c = texto[i];

            if (c != ' ') {
                if (c >= 'A' && c <= 'Z') {
                    c += 32;
                }
                limpa += c;
            }
        }

        int inicio = 0;
        int fim = limpa.length() - 1;

        while (inicio < fim) {
            if (limpa[inicio] != limpa[fim]) {
                return false;
            }
            inicio++;
            fim--;
        }

        return true;
    }
};

int main() {
	setlocale(LC_ALL, "Portuguese");
	
    Palindromo verificador;
    string entrada;

    cout << "--- Verificador de Pal�ndromos ---" << endl;
    cout << "Digite uma palavra ou frase: ";
    getline(cin, entrada);

    bool resultado = verificador.verificar(entrada);

    if (resultado) {
        cout << "� um pal�ndromo!" << endl;
    } else {
        cout << "N�o � um pal�ndromo." << endl;
    }

    return 0;
}

