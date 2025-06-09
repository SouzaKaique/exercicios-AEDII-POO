//1.3 Fatorial (Usar método recursivo)

#include <iostream>

using namespace std;

class Matematica {
		public:
    		int fatorial(int n) {
        		if (n == 0 || n == 1) {
            return 1;
        	} else {
            	return n * fatorial(n - 1);
        }
    }
};

int main() {
    Matematica conta;
    int numero;

    cout << "--- Fatorial ---" << endl;
    cout << "Digite um numero inteiro nao negativo: ";
    cin >> numero;

    if (numero < 0) {
        cout << "Fatorial não é definido para números negativos!" << endl;
    } else {
        int resultado = conta.fatorial(numero);
        cout << "Fatorial de " << numero << " = " << resultado << endl;
    }

    return 0;
}

