#include <string>
#include <vector>
#include <algorithm>

string	solution(vector<string> seoul)
{
	string ret = "";
	int pos = find(seoul.begin(), seoul.end(), "Kim") - seoul.begin();
	ret = "김서방은 " + to_string(pos) + "에 있다";
	return ret;
}

