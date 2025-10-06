/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby,
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

int main() {
	double num1, num2;
	char oper;

	cout << "Calculadora simple en C++\n";
	cout << "Ingrese el primer nC:mero: ";
	cin >> num1;

	cout << "Ingrese el operador (+, -, *, /): ";
	cin >> oper;

	cout << "Ingrese el segundo nC:mero: ";
	cin >> num2;

	switch (oper) {
	case '+':
		cout << "Resultado: " << num1 + num2 << endl;
		break;
	case '-':
		cout << "Resultado: " << num1 - num2 << endl;
		break;
	case '*':
		cout << "Resultado: " << num1 * num2 << endl;
		break;
	case '/':
		if (num2 != 0)
			cout << "Resultado: " << num1 / num2 << endl;
		else
			cout << "Error: DivisiC3n por cero." << endl;
		break;
	default:
		cout << "Operador no vC!lido." << endl;
	}

	return 0;
}