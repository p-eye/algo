#include <iostream>
#include <algorithm>
#include <vector>
#include <numeric>

using namespace std;

int a, b;

int main(void)
{
	vector<int> arr(20);

	for (int i = 0; i < 20; i++)
		arr[i] = i + 1;
	// itoa(arr.begin(), arr.end(), 1); : 1부터 ++되면서 값 넣어줌
	for (int i = 0; i < 10; i++)
	{
		cin >> a;
		cin >> b;
		reverse(arr.begin() + a - 1, arr.begin() + b);
	}
	for (int i = 0; i < 20; i++)
		cout << arr[i] << " ";
}
