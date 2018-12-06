#include <vector>
#include <iostream>
#include <algorithm>

template<typename IterT>
void flip_arr(IterT begin, IterT end)
{
    for (; begin < end; begin++, end--)
    {
        std::swap(*begin, *(end - 1));
    }
}

int main()
{
    size_t m, n;
    std::cout << "Input m: ";
    std::cin >> m;
    do
    {
        std::cout << "Input n: ";
        std::cin >> n;
    } while (n >= m);

    std::vector<int> arr;
    arr.resize(m);
    for (int i = 0; i < arr.size(); i++)
    {
        arr[i] = i;
    }

    flip_arr(arr.begin(), arr.begin() + n);
    flip_arr(arr.begin() + n, arr.end());
    flip_arr(arr.begin(), arr.end());

    for (std::vector<int>::iterator i = arr.begin(); i < arr.end(); i++)
    {
        std::cout << *i << " ";
    }
    std::cout << std::endl;
    return 0;
}