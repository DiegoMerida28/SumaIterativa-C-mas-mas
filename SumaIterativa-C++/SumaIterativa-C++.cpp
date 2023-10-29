#include <iostream>

int main() {
    int num1, num2;
    std::cout << "Ingresa el primer numero: ";
    std::cin >> num1;
    std::cout << "Ingresa el segundo numero: ";
    std::cin >> num2;

    int suma = 0;

    for (int i = 0; i < num2; i++) {
        suma += num1;
    }

    std::cout << "La suma de " << num1 << " y " << num2 << " es: " << suma << std::endl;

    return 0;
}
