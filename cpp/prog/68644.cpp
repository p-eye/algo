#include <string>
#include <vector>
#include <algorithm>

vector<int>	solution(vector<int> numbers)
{
	vector<int> ret;
	int len = numbers.size();

	for (int i = 0; i < len - 1; i++)
		for (int j = i + 1; j < len; j++)
			ret.push_back(numbers[i] + numbers[j]);
	sort(ret.begin(), ret.end());
	for (int i = 1; i < ret.size(); i++)
		while (i < ret.size() && ret[i - 1] == ret[i])
			ret.erase(ret.begin() + i);
	/*
	 * set<int> st;
	 * for (int i = 0; i < len - 1; i++)
	 * 	for (int j = i + 1; i < len; j++)
	 *   st.insert(numbers[i] + numbers[j]);
	 *
	 * ret.assign(st.begin(), st.end());
	 */
	return ret;
}

