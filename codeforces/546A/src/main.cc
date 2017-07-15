#include <iostream>

int main()
{
	int k, n, w;
	std::cin >> k >> n >> w;
	std::cout << ((((k * (w * w + w) / 2) - n) > 0)
	             ? ((k * (w * w + w) / 2) - n) : 0);
	return 0;
}

