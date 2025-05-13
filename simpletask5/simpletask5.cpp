#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    const double pi = 3.14;
    double r;

    std::cout << "enter R: ";
    std::cin >> r;

    double S = pi * r * 2;
    double H = pi * r * r;

    std::cout << fixed << setprecision(2);
   
    std::cout << "S = " << S << endl;
    std::cout << "H = " << H;


    return 0;
}