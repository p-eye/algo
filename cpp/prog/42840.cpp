#include <string>
#include <vector>

int p1[5] = {1, 2, 3, 4, 5};
int p2[8] = {2, 1, 2, 3, 2, 4, 2, 5};
int p3[10] = {3, 3, 1, 1, 2, 2, 4, 4, 5, 5};

vector<int> solution(vector<int> answers)
{
	vector<int> ret;
	vector<int> cnt(3, 0);
	int len = answers.size();

	for (int i = 0; i < len; i++)
	{
		if (answers[i] == p1[i % 5])
			cnt[0]++;
		if (answers[i] == p2[i % 8])
			cnt[1]++;
		if (answers[i] == p3[i % 10])
			cnt[2]++;
	}
	int max_score = max(max(cnt[0], cnt[1]), cnt[2]);
	for (int i = 0; i < 3; i++)
		if (cnt[i] == max_score)
			ret.push_back(i + 1);
	return ret;
}

