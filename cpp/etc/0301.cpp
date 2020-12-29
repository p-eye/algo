#include <string>
#include <iostream>
#include <cctype>

using namespace std;

int n;
string str;

int main(void)
{
	int flag;
	int len;
	cin >> n;

	for (int i = 1; i <= n; i++)
	{
		cin >> str;
		len = str.size();
		flag = 0;
		for (int j = 0; j < len / 2; j++)
		{
			if (tolower(str[j]) != tolower(str[len - 1 - j]))
			{
				flag = 1;
				printf("#%d NO\n", i);
				break;
			}
		}
		if (flag == 0)
			printf("#%d YES\n", i);	
	}
}
