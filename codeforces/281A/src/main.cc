#include <iostream>
#include <string>

using std::string;
int main()
{
	string str;
	std::cin >> str;
	str[0] = str[0] & 0xDF;
	std::cout << str;
	return 0;
}