#include <iostream> // для оператора cout
#include <cmath>    // для функции tan

#define PI 3.14159265 // число ПИ

int main()
{
    double param = 45.0; // угол 45 градусов

    std::cout << "Тангенс угла "
              << param << " градусов = "
              << tan(param * PI / 180) // вычисляем тангенс угла, переведённого в радианы
              << std::endl;
    return 0;
}