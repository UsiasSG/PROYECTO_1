#include <iostream>

int main() {
    int Nacimiento;
    std::cout << "Ingresa tu a�o de nacimiento: ";
    std::cin >> Nacimiento;

    int Actual = 2024; // P
    int edad = Actual - Nacimiento;

    std::cout << "Tu edad es: " << edad << " a�os" << std::endl;

    return 0;
}
