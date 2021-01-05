#include <string>
#include <vector>
#include <algorithm>

string solution(vector<string> participant, vector<string> completion)
{
	sort(participant.begin(), participant.end());
	sort(completion.begin(), completion.end());

	for (int i = 0; i < participant.size(); i++)
	{
		if (participant[i] != completion[i])
			return participant[i];
	}
}

#include <map>
#include <string>
#include <algorithm>

using namespace std;

string solution(vector<string> part, vector<string> comple)
{

	map<string, int> ma;
	for (int i = 0; i < part.size(); i++)
		ma[part[i]] += 1;
	for (int i = 0; i < comple.size(); i++)
		ma[comple[i]] -= 1;

	for (auto it = ma.begin(); it != ma.end(); it++)
		if (it->second == 1)
			return it->first;
}