#include <iostream>
#include <vector>
#include <algorithm>

int n, m;

int main(void)
{
	cin >> n;
	vector<vector<int> >arr(n, vector<int>(n, 0));
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			cin >> arr[i][j];
	cin >> m;
	vector<vector<int> rot(m, vector<int>(m, 0));
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			cin >> rot[i][j];
	
	for (int i = 0; i < m; i++)
	{

	}
}
