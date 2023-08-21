#include <iostream>

int main() {
    const double PI = 3.14159; //Pi tera valor constante
    double raio = 10;
    double circunferencia = 2 * PI * raio;
    const int VEL_LUZ = 299792458;
    const int WIDTH = 1920;
    const int HEIGHT = 1080;

    std::cout << circunferencia << "cm";
    std::cout << "A Velocidade da Luz e " << VEL_LUZ;
    return 0;
}
