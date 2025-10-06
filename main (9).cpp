/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby,
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream> // Necesario para entrada y salida

int main() {
    int n;
    long long factorial = 1; // Usar long long para valores grandes

    std::cout << "Introduce un número: ";
    std::cin >> n;

    // Asegurarse de que el número es no negativo
    if (n < 0) {
        std::cout << "El factorial no está definido para números negativos." << std::endl;
    } else {
        // Calcular el factorial usando un bucle for
        for (int i = 1; i <= n; ++i) {
            factorial *= i; // factorial = factorial * i
        }
        std::cout << "El factorial de " << n << " es: " << factorial << std::endl;
    }

    return 0;
}