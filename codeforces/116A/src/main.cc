#include <iostream>

int main()
{
	int n, a, b, s = 0, s_max = 0 ;
	std::cin >> n;
	for(int i = 0; i < n; i++)
	{
		std::cin >> a >> b;
		s = s - a;
		s = s + b;
		if(s > s_max)
		{
			s_max = s;
		}
	}
	std::cout << s_max;
	return 0;
}

