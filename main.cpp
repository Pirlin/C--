#include <iostream>
#include <iomanip>
int main()
{
    float value = 1.23456778f;
    std::cout<< std::setprecision(8);
    std::cout << "value: " << value << std::endl;
}