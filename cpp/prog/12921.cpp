#include <string>
#include <vector>

int	solution(int n)
{
	vector<int> code(n + 1, 0);
	int cnt = 0;

	for (int i = 2; i <= n; i++)
	{
		if (code[i] == 0)
		{
			cnt++;
			for (int j = 2 * i; j <= n; j++)
				code[j] = 1;
		}
	}
	return cnt;
}
