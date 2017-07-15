#include <iostream>

int main()
{
	bool flag = false;
	char str[100] = "";
	int count[3] = {0, 0, 0};
	std::cin >> str;
	for(int i = 0; i < 100; i = i + 2)
	{
		if('0' < str[i] && str[i] < '4')
			count[str[i] - '1'] = count[str[i] - '1'] + 1;
	}
/*	std::cout << "====LOG====" << std::endl;
	for(int i = 0; i < 3; i++)
	{
		std::cout << count[i] << std::endl;
	}
	std::cout << "====LOG====" << std::endl;*/
	for(int i = 0; i < 3; i++)
	{
		for(int j = 0; j < count[i]; j++)
		{
			if(flag == true)
				std::cout << "+";
			std::cout << (i+1);
			flag = true;
		}
	}
	return 0;
}

