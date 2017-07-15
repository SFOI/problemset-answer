#include <iostream>

int main()
{
	int factor[14] = {4, 7, 44, 47, 74, 77, 444, 447, 474, 477, 744, 747, 774, 777};
	int v;
	bool flag = false;
	std::cin >> v;
	for(int i = 0; i < 14; i++)
	{
		if(v == factor[i] || v % factor[i] == 0)
			flag = true;
	}
	if(flag == true)
		std::cout << "YES";
	else
		std::cout << "NO";
	return 0;
}