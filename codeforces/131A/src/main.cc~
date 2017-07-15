#include <iostream>
#include <string>

using std::string;
int main()
{
	bool flag = true;
	string str;
	std::cin >> str;
	if(str.length() > 1)
	{
		for(int i = 1; i < str.length(); i++)
		{
			if((str[i] & 0x20) > 0)
				flag = false;
		}
	}
	if(flag)
	{
		for(int i = 0; i < str.length(); i++)
		{
			if((str[i] & 0x20) > 0)
			{
				str[i] = str[i] & 0xDF;
			}
			else
			{
				str[i] = str[i] | 0x20;
			}
		}
	}
	std::cout << str;
	return 0;
}

