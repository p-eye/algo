#include <string>
#include <cstdlib>

int	solution(int n)
{
	int ret = 0 ;
	string str = "";
	while (n)
	{
		str += n % 3 + '0';
		str /= 3;
	}
	ret = stoi(str, 0, 3);
/*	for (int i = 0; i < str.size(); i++)
 *		ret = ret * 3 + str[i] - '0';
*/
	return ret;
}

