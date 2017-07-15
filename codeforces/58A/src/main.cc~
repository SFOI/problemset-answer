#include <iostream>
#include <string>

using std::string;
int main()
{
	char find[6] = "hello", cnt = 0;
	string str;
	std::cin >> str;
	for(int i = 0; i < str.length(); i++)
	{
		if(str[i] == find[cnt])
		{
			cnt++;
		}
		if(cnt == 5)
			break;
	}
	if(cnt == 5)
		std::cout << "YES";
	else
		std::cout << "NO";
	return 0;
}