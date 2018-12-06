#include <iostream>

int main()
{
    long long int x;
    std::cout << "Input x: ";
    std::cin >> x;

    auto x2 = x * x;

    std::cout << "x ^ 4 + x ^ 3 + x ^ 2 + x + 1 = " << (x2 + 1) * (x2 + 1) + 1 << std::endl;

    return 0;
}