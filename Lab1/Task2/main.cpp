#include <iostream>
#include <cmath>

int sign(long long a)
{
    return a < 0 ? -1 : a > 0 ? 1 : -1;
}

int main()
{
    long long dividend, divider;
    std::cout << "Input dividend: ";
    std::cin >> dividend;
    do
    {
        std::cout << "Input divider(!= 0): ";
        std::cin >> divider;
    } while (divider == 0);

    int c = sign(dividend) * sign(divider);

    long long quotient = 0;
    for (; std::abs(dividend - divider * quotient) >= std::abs(divider) ||
           dividend < divider * quotient; quotient += c);

    std::cout << "Quotient: " << quotient << std::endl;

    return 0;
}