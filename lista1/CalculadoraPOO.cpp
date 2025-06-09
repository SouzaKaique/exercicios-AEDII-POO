//1.1 Calculadora Simples

#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

class Calculadora {
	public: 
		float somar (float num1, float num2) {
			return num1 + num2;
		}
		
		float subtrair (float num1, float num2) {
			return num1 - num2;
		}
		
		float multiplicar (float num1, float num2) {
			return num1 * num2;
		}
		
		float dividir (float num1, float num2) {
			if (num2 != 0) {
				return num1 / num2;
			} else {
				cout << "Divisão por zero ou negativo!";
				
				return 0;
			}
		}
};

int main () {
	setlocale(LC_ALL, "Portuguese");
	
	Calculadora calculos;
	float num1, num2;
	char op;
	
	cout << "--- Calculadora ---" <<endl;
	cout << "Digite o primeiro numero: ";
	cin >> num1;
	cout << "Digite o segundo numero: ";
	cin >> num2;
	cout << "Escolha a opração  (+, -, *, /): ";
	cin >> op;
	
	float resultado = 0;
	
	switch (op) {
		case '+':
			resultado = calculos.somar(num1, num2);
			cout << "Resultado: " << num1 << " + " << num2 <<  " = " << resultado <<endl;
			break;
			
		case '-':
			resultado = calculos.subtrair(num1, num2);
			cout << "Resultado: " << num1 << " - " << num2 << " = " << resultado <<endl;
			break;
			
		case '*':
			resultado = calculos.multiplicar(num1, num2);
			cout << "Resultado: " << num1 << " * " << num2 << " = " << resultado <<endl;
			break;
			
		case '/':
			resultado = calculos.dividir(num1, num2);
			if (num2 != 0) {
			cout << "Resultado: " << num1 << " / " << num2 << " = " << resultado <<endl;
			}
			break;
			default: cout << "Operação inválida!" <<endl;
	}
		return 0;
}

