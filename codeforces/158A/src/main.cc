#include <iostream>
#include <vector>

int main()
{
	int n, k;
	int count = 0;
	std::cin >> n >> k;
	std::vector<int> scores(n); 
	for(int i = 0; i < n; i++)
	{
		std::cin >> scores[i];
	}
	for(int i = 0; i < n; i++)
	{
		if(scores[i] >= scores[k - 1] && scores[i] != 0)
		{
			count++;
		}
	}
	std::cout << count;
	return 0;
}