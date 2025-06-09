//1.4 Conversor de Temperaturas

#include <iostream>
#include <locale.h>

using namespace std;

class ConversorTemperatura {
		public:
    		float celsiusParaFahrenheit(float celsius) {
        		return celsius * 1.8 + 32;
    }

    float fahrenheitParaCelsius(float fahrenheit) {
        return (fahrenheit - 32) / 1.8;
    }

    char exibirMenu() {
        char opcao;
        cout << "\nEscolha uma opção:\n";
        cout << "1 - Converter Celsius para Fahrenheit\n";
        cout << "2 - Converter Fahrenheit para Celsius\n";
        cout << "3 - Sair\n";
        cout << "Opção: ";
        cin >> opcao;
        return opcao;
    }

    void executar() {
        char opcao;
        float graus;

        do {
            opcao = exibirMenu();

            switch (opcao) {
                case '1':
                    cout << "Digite a temperatura em Celsius: ";
                    cin >> graus;
                    cout << celsiusParaFahrenheit(graus) << "°F" << endl;
                    break;
                case '2':
                    cout << "Digite a temperatura em Fahrenheit: ";
                    cin >> graus;
                    cout << fahrenheitParaCelsius(graus) << "°C" << endl;
                    break;
                case '3':
                    cout << "Saindo do programa..." << endl;
                    break;
                default:
                    cout << "Opção inválida! Tente novamente.\n";
            }

        } while (opcao != '3');
    }
};

int main() {
    setlocale(LC_ALL, "Portuguese");

    ConversorTemperatura conversor;
    conversor.executar();

    return 0;
}

