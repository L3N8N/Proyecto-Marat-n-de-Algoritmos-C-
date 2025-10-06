/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby,
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

int main() {
    int a = 7;
    int b = 8;

    // Comprobamos si 'a' es mayor que 'b'
    if (a > b) {
        std::cout << a << " es mayor que " << b << std::endl; // Esto se imprimirá
    } else {
        std::cout << a << " no es mayor que " << b << std::endl;
    }

    return 0;
}