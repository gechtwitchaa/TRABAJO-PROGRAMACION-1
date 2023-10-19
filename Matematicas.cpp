#include <iostream>

double suma(double a, double b) {
    return a + b;
}

double resta(double a, double b) {
    return a - b;
}

double multiplicacion(double a, double b) {
    return a * b;
}

double division(double a, double b) {
    if (b != 0) {
        return a / b;
    } else {
        std::cerr << "Error: División por cero." << std::endl;
        return 0;
    }
}

int main() {
    double num1 = 1.0;
    double num2 = 2.0;
    std::cout << "Suma: " << suma(num1, num2) << std::endl;
    std::cout << "Resta: " << resta(num1, num2) << std::endl;
    std::cout << "Multiplicacion: " << multiplicacion(num1, num2) << std::endl;
    std::cout << "Division: " << division(num1, num2) << std::endl;

    return 0;
}

