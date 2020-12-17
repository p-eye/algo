#include <string>
#include <vector>
#include <algorithm>

vector<int> solution(vector<int> arr, int divisor)
{
	vector <int> ret;
	int len = arr.size();

	for (int i = 0; i < len; i++)
	{
		if (arr[i] % divisor == 0)
			ret.push_back(arr[i]);
	}
	if (ret.size() == 0)
		ret.push_back(-1);
	else
		sort(ret.begin(), ret.end(), less<int>());
	return ret;
}

