#include <string>
#include <iostream>
#include <cctype>

using namespace std;

string str;

int main(void)
{
	cin >> str;

	// 숫자만 추출
	int len = str.size();
	int sum = 0;
	for (int i = 0; i < len; i++)
		if (isdigit(str[i]))
			sum = sum * 10 + str[i] - '0';
	printf("%d\n", sum);
	

	// 약수 개수 
	int cnt = 0;
	for (int i = 1; i * i <= sum; i++)
	{
		if (i * i == sum)
			cnt += 1;
		else if (sum % i == 0)
			cnt += 2;
	}
	printf("%d\n", cnt);
}
