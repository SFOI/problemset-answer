#include <iostream>

int main()
{
	int n, p, q, cnt = 0;
	std::cin >> n;
	for(int i = 0; i < n; i++)
	{
		std::cin >> p >> q;
		if(q - p >= 2)
			cnt++;
	}
	std::cout << cnt;
	return 0;
}