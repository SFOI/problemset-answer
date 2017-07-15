#include <iostream>

int main()
{
    int n, s = 0;
    std::cin >> n;
    for(int i = 1; i <= n; i++)
    {
        s = s + i * (n - i) + 1;
    }
    std::cout << s;
    return 0;
}