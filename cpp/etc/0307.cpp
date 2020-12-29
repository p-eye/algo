#include <iostream>
#include <vector>

using namespace std;

int n;

int main(void)
{
	cin >> n;
	vector<vector<int> >arr(n, vector<int>(n, 0));

	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			cin >> arr[i][j];
	int sum = 0;
	
	// case 1
	for (int i = 0; i < n / 2 + 1; i++)
		for (int j = n / 2  - i; j < n - n / 2 + i; j++)
			sum += arr[i][j];
	
	for (int i = n / 2 + 1; i < n; i++)
		for (int j = i - n / 2; j < n / 2 + n - i; j++)
			sum += arr[i][j];
	
	// case 2
	int p = n / 2 + 1;
	int q = n / 2 - 1;
	for (int i = 0; i < n; i++)
	{
		if (i < n / 2 + 1)
		{
			p -= 1;
			q += 1;
		}
		else
		{
			p += 1;
			q -= 1;
		}
		for (int j = p; j < q + 1; j++)
			sum += arr[i][j];
	}

	cout << sum;
}
