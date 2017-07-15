#include <iostream>
#include <string>

using std::string;
int main()
{
	bool flag = false;
	string str;
	std::cin >> str;
	for(int i = 0; i < str.length(); i++)
	{
		if(str[i] == 'H' || str[i] == 'Q' || str[i] == '9')
			flag = true;
	}
	std::cout << (flag ? "YES" : "NO");
	return 0;
}

