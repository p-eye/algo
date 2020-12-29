#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int n;

int main(void)
{
	cin >> n;
	vector<vector<int> > arr(n, vector<int>(n, 0));
	vector<int> sum(2 * n + 2, 0);

	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			cin >> arr[i][j];

	
	// case 1
	int k  = 0;
	for (int i = 0; i < n; i++)
	{	
		// 행
		for (int j = 0; j < n; j++)
			sum[k] += arr[i][j];
		k++;
		// 열 
		for (int j = 0; j < n; j++)
			sum[k] += arr[j][i];
		k++;
	}
	// 대각선1
	for (int i = 0; i < n; i++)
		sum[k] += arr[i][i];
	k++;
	// 대각선2
	for (int i = 0; i < n; i++)
		sum[k] += arr[n - 1 - i][i];

	sort(sum.begin(), sum.end(), greater<int>());
	cout << sum[0];
	

	// case 2
	int sum1, sum2;
	int ret = 0;
	for (int i = 0; i < n; i++)
	{
		sum1 = 0;
		sum2 = 0;
		for (int j = 0; j < n; j++)
		{
			sum1 += arr[i][j];
			sum2 += arr[j][i];
		}
		ret = max(ret, max(sum1, sum2));
	}

	sum1 = 0;
	sum2 = 0;
	for (int i = 0; i < n; i++)
	{
		sum1 += arr[i][i];
		sum2 += arr[n - 1 - i][i];
	}
	ret = max(ret, max(sum1, sum2));
	cout << ret;
}
