//3.2 Trocando Valores entre Objetos (simulado)

#include <iostream>
using namespace std;

class ValorContainer {
		public:
    	int valor;

    	ValorContainer(int v = 0) {
        	valor = v;
    }

void imprimir() {
        cout << "Valor: " << valor << endl;
    }

    static void trocarValores(ValorContainer &refA, ValorContainer &refB) {
        int temp = refA.valor;
        refA.valor = refB.valor;
        refB.valor = temp;
    }
};

int main() {
	setlocale(LC_ALL, "Portuguese");
    ValorContainer objA, objB;
    
    cout << "Digite o valor para objA: ";
    cin >> objA.valor;
    cout << "Digite o valor para objB: ";
    cin >> objB.valor;

    cout << "\nAntes da troca:\n";
    cout << "objA "; objA.imprimir();
    cout << "objB "; objB.imprimir();

    ValorContainer::trocarValores(objA, objB);

    cout << "\nDepois da troca:\n";
    cout << "objA "; objA.imprimir();
    cout << "objB "; objB.imprimir();

    return 0;
}

