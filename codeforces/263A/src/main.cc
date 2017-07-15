#include <iostream>
#include <algorithm>

int main()
{
	int v = 0, d;
	for(int i = 0; i < 25; i++)
	{
		std::cin >> v;
		if(v == 1)
		{
			d = i;
		}
	}
	std::cout << abs((d % 5) - 2) + abs((d / 5) - 2);
	return 0;
}