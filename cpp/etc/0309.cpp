#include <iostream>
#include <vector>

using namespace std;

int n;

int main(void)
{
	cin >> n;
	vector<vector<int> >arr(n + 2, vector<int>(n + 2, 0));
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= n; j++)
			cin >> arr[i][j];

	// case 1
	int cnt = 0;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			int temp = arr[i][j];
			if (temp > arr[i - 1][j] && temp > arr[i + 1][j] \
				&& temp > arr[i][j - 1] && temp > arr[i][j + 1])
				cnt++;
		}
	}
	cout << cnt << endl;

	// case 2
	int xarr[4] = {-1, 0, 1, 0};
	int yarr[4] = {0, 1, 0, -1};

	int answer = 0;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			int temp = arr[i][j];
			int cnt = 1;
			for (int k = 0; k < 4; k++)
			{
				if (temp <= arr[i + xarr[k]][j + yarr[k]])
				{
					cnt = 0;
					break;
				}
			}
			answer += cnt;
		}
	}
	cout << answer << endl;
}
