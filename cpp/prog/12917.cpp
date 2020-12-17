#include <string>
#include <vector>
#include <algorithm>

string solution(string s)
{
	sort(s.begin(), s.end(), greater<char>());
	return s;
}
