#include <iostream>

double add(double a, double b) {
    return a + b;
}

double subtract(double a, double b) {
    return a - b;
}

double multiply(double a, double b) {
    return a * b;
}

double divide(double a, double b) {
    if (b == 0) {
        std::cout << "Error! La división entre cero no está permitida." << std::endl;
        return 0;
    }
    return a / b;
}

int main() {
    double num1, num2;
    char operation;
    
    std::cout << "Ingrese la operación (+, -, *, /): ";
    std::cin >> operation;

    std::cout << "Ingrese el primer número: ";
    std::cin >> num1;

    std::cout << "Ingrese el segundo número: ";
    std::cin >> num2;

    switch (operation) {
        case '+':
            std::cout << "El resultado es: " << add(num1, num2) << std::endl;
            break;
        case '-':
            std::cout << "El resultado es: " << subtract(num1, num2) << std::endl;
            break;
        case '*':
            std::cout << "El resultado es: " << multiply(num1, num2) << std::endl;
            break;
        case '/':
            std::cout << "El resultado es: " << divide(num1, num2) << std::endl;
            break;
        default:
            std::cout << "Error! Operación inválida." << std::endl;
            break;
    }

    return 0;
}