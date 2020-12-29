// 중복순열 구하기
#include <iostream>
#include <vector>

using namespace std;

int n, m;
int cnt = 0;
vector<int> arr;

void print_arr(void)
{
	for (int i = 0; i < m; i++)
		cout<< arr[i] << " ";
	cout << endl;
	cnt++;
}

void dfs(int lev)
{
	if (lev == m)
	{
		print_arr();
		return ;
	}
	for (int i = 0; i < n; i++)
	{
		arr[lev] = i + 1;
		dfs(lev + 1);
	}
}

int main(void)
{
	cin >> n >> m;
	
	for (int i = 0; i < m; i++)
		arr.push_back(0);

	dfs(0);
	cout << cnt << endl;
}
