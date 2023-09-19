#include <iostream>
#include <cmath>

int main() {
    // Definir el radio del círculo en centímetros
    double radio = 12.0;

    // Calcular el área del círculo (pi * radio * radio)
    double area = M_PI * radio * radio;

    // Mostrar el resultado
    std::cout << "El área del círculo con un radio de " << radio << " cm es: " << area << " cm^2" << std::endl;

    return 0;
}
