#include <iostream>
#include <vector>

using namespace std;

int n1;
int n2;

int main(void)
{
	cin >> n1;
	vector<int> arr1(n1);
	for (int i = 0; i < n1; i++)
		cin >> arr1[i];
	cin >> n2;
	vector<int> arr2(n2);
	for (int i = 0; i < n2; i++)
		cin >> arr2[i];
	vector<int> ret(n1 + n2);
	
	int i = 0;
	int j = 0;
	int k = 0;
	
	// case1
	while (k < n1 + n2)
	{
		if (i == n1)
		{	
			ret[k] = arr2[j];
			j++;
		}
		else if (j == n2)
		{
			ret[k] = arr1[i];
			i++;
		}
		else if (arr1[i] > arr2[j])
		{
			ret[k] = arr2[j];
			j++;
		}
		else
		{
			ret[k] = arr1[i];
			i++;
		}
		k++;
	}

	// case2
	while (i < n1 && j < n2)
	{
		if (arr1[i] > arr2[j])
		{
			ret[k] = arr2[j];
			j++;
		}
		else
		{
			ret[k] = arr1[i];
			i++;
		}
		k++;
	}
	if (i < n1)
	{
		ret[k] = arr1[i];
		k++;
		i++;
	}
	if (j < n2)
	{
		ret[k] = arr2[j];
		k++;
		j++;
	}

	for (int i = 0; i < n1 + n2; i++)
		printf("%d ", ret[i]);
}
