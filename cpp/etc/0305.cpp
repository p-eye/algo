#include <iostream>
#include <vector>

using namespace std;

int n, m;

int main(void)
{
	cin >> n >> m;
	vector<int> arr(n, 0);
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	
	int cnt = 0;

	// case1
	for (int i = 0; i < n; i++)
	{
		int sum = 0;
		for (int j = i; j < n; j++)
		{
			sum += arr[j];
			if (sum == m)
			{
				cnt++;
				break;
			}
			if (sum > m)
				break;
		}
	}
	cout << cnt;
}
