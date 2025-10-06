/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby,
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream> // Para las funciones de entrada y salida (cin, cout)

int main() {
    // Declarar variables para la base, altura y área
    float base;
    float altura;
    float area;

    // Solicitar al usuario que ingrese la base
    std::cout << "Ingrese la base del triángulo: ";
    std::cin >> base; // Leer el valor de la base ingresado por el usuario

    // Solicitar al usuario que ingrese la altura
    std::cout << "Ingrese la altura del triángulo: ";
    std::cin >> altura; // Leer el valor de la altura ingresado por el usuario

    // Calcular el área del triángulo usando la fórmula
    area = (base * altura) / 2;

    // Mostrar el resultado del área
    std::cout << "El área del triángulo es: " << area << std::endl;

    return 0;
}