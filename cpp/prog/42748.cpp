#include <string>
#include <vector>
#include <algorithm>

vector<int> solution(vector<int> array, vector<vector<int>> commands)
{
	vector<int> ret;
	int len = commands.size();

	for (int i = 0; i < len; i++)
	{
		vector<int> temp = array;
		// 뒤는 -1 안해줘도 기본이 저 위치보다 1 작은 데 까지라서.
		sort(array.begin() + temp[i][0] - 1, array.begin() + temp[i][1]);
		ret.push_back(array.begin() + temp[i][0] - 2 + temp[i][2]);
	}
	return ret;
}
