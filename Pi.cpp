#include <iostream>
#include <iomanip>

#define TWO 2
#define Pi 3.1415926535897932384626433832795

int main()
{
    int r =10;
    double area = TWO * Pi *r;
    std::cout<< std::setprecision(20)<<area;
    return 0;
}