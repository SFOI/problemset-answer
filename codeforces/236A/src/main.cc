#include <iostream>
#include <string>
#include <cstdio>

int main()
{
	int count[26], realcount = 0;
	char str[100] = "";
	std::cin >> str;
	for(int i = 0; i < 26; i++)
	{
		count[i] = 0;
	}
	for(int i = 0; i < 100; i++)
	{
		if(str[i] >= 'a' && str[i] <= 'z')
			count[str[i] - 'a'] = 1;
	}
	for(int i = 0; i < 26; i++)
	{
		if(count[i] == 1)
		{
			// std::cout << i << std::endl;
			realcount++;
		}
	}
	// std::cout << realcount;
	if(realcount % 2 == 0)
		std::cout << "CHAT WITH HER!";
	else
		std::cout << "IGNORE HIM!";
	return 0;
}