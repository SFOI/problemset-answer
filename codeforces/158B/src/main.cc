#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int n, v = 0, s = 0;
	vector<int> count(4);
	cin >> n;
	for(int i = 0; i < n; i++)
	{
		cin >> v;
		count[v - 1] = count[v - 1] + 1;
	}
	if(count[2] >= count[0])
	{
		count[0] = 0;
		count[1] = (count[1] + 1) / 2;
	}
	else
	{
		count[0] = count[0] - count[2];
		if(count[0] >= 2 * count[1])
		{
			count[0] = count[0] - 2 * count[1];
			count[0] = (count[0] + 3) / 4;
		}
		else
		{
			count[1] = (count[0] + 1) / 2 + ((count[1] - (count[0] + 1) / 2) + 1) / 2;
			count[0] = 0;
		}
	}
	for(int i = 0; i < 4; i++)
	{
		s = s + count[i];
	}
/*	cout << "========LOG=======" << endl;
	for(int i = 0; i < 4; i++)
	{
		cout << count[i];
	}
	cout << "========LOG=======" << endl;*/
	cout << s;
	return 0;
}

