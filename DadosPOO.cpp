//3.1 Manipulando Dados de um Objeto

#include <iostream>
using namespace std;

class Numero {
public:
    int valor;

    Numero(int v = 0) {
        valor = v;
    }

    void imprimirValor() {
        cout << "Valor do objeto: " << valor << endl;
    }

    void imprimirEndereco() {
        cout << "Endereco do objeto: " << this << endl;
    }
};

int main() {
	setlocale(LC_ALL, "Portuguese");
    Numero num;  
    num.valor = 42;  
    num.imprimirValor();   
    num.imprimirEndereco();

    return 0;
}

