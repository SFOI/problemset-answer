#include <iostream>
#include <string>
#include <cctype>
#include <algorithm>

using std::min;
using std::string;
int main()
{
	int v = 0;
	string a, b;
	std::cin >> a >> b;
	transform(a.begin(),a.end(),a.begin(),tolower);
	transform(b.begin(),b.end(),b.begin(),tolower);
	for(int i = 0; i < min(a.length(), b.length()); i++)
	{
		if(a[i] > b[i])
		{
			v = 1;
			break;
		}
		if(a[i] < b[i])
		{
			v = -1;
			break;
		}
	}
	if(v == 0 && a.length() != b.length())
	{
		v = a.length() > b.length() ? 1 : -1;
	}
	std::cout << v;
	return 0;
}

