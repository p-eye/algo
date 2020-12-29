// 순열구하기
#include <iostream>
#include <vector>

using namespace std;

int n, m;
int cnt;
vector<int> arr;
vector<int> check;

void printarr(void)
{
	for (int i = 0; i < m; i++)
		cout << arr[i] << " ";
	cout << endl;
	cnt++;
}

void dfs(int lev)
{
	if (lev == m)
	{
		printarr();
		return;
	}
	for (int i = 1; i <= n; i++)
	{
		// 체크된 것은 건너뛰어야 하기 때문에
		if (check[i] != 1)
		{
			check[i] = 1;
			arr[lev] = i;
			dfs(lev + 1);
			check[i] = 0;
		}
	}
}

int main(void)
{
	cin >> n >> m;
	for (int i = 0; i < m; i++)
		arr.push_back(0);
	for (int i = 0; i < n + 1; i++)
		check.push_back(0);
	dfs(0);
	cout << cnt << endl;
}
