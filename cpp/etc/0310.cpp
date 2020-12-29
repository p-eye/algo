#include <iostream>
#include <vector>

using namespace std;

int n;

int main(void)
{
	vector<vector<int> >arr(9, vector<int>(9, 0));
	for (int i = 0; i < 9; i++)
		for (int j = 0; j < 9; j++)
			cin >> arr[i][j];

	// 한줄에 9가 아닐 때
	for (int i = 0; i < 9; i++)
	{
		vector<int> cnt(9, 0);
		for (int j = 0; j < 9; j++)
			cnt[arr[i][j] - 1] += 1;
		int is_nine = 0;
		for (int j = 0; j < 9; j++)
			if (cnt[j] == 1)
				is_nine++;
		if (is_nine != 9)
		{
			cout << "NO" << endl;
			return 0;
		}
		cnt.clear();
	}

	// 3*3 체크
	for (int i = 0; i < 3; i++)
	{
		vector<int> cnt(9, 0);
		for (int j = 0; j < 3; j++)
			cnt[arr[i][j] - 1] += 1;
		int is_nine = 0;
		for (int j = 0; j < 9; j++)
			if (cnt[j] == 1)
				is_nine++;
		if (is_nine != 9)
		{
			cout << "NO" << endl;
			return 0;
		}
		for (int j = 3; j < 6; j++)
		{

		}
		for (int j = 6; j < 9; j++)
		{

		}

	}
	for (int i = 3; i < 6; i++)
	{
		int sum = 0;
		for (int j = 0; j < 3; j++)
		{
			sum += arr[i][j];
		}
		for (int j = 3; j < 6; j++)
		{

		}
		for (int j = 6; j < 9; j++)
		{

		}

	}

	for (int i = 6; i < 9; i++)
	{
		int sum = 0;
		for (int j = 0; j < 3; j++)
		{
			sum += arr[i][j];
		}
		for (int j = 3; j < 6; j++)
		{

		}
		for (int j = 6; j < 9; j++)
		{

		}

	}
	cout << "YES" << endl;
}
