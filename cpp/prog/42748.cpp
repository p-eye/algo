#include <string>
#include <vector>
#include <algorithm>

vector<int> solution(vector<int> array, vector<vector<int>> commands)
{
	vector<int>	ret;
	vector<int> temp = array;
	int len = array.size();

	for (int i = 0; i < command.size(); i++)
	{
		array = temp;
		string str = "";
		for (int i = 0; i < len; i++)
			str += array[i] + '0';
		str = str.substr(command[i][0] - 1, command[i][1] - command[i][0] + 1);
		sort(str.begin(), str.end());
		ret.push_back(str[command[i][2] - 1] - '0');
/*
 * 		array = temp;
 * 		sort(array.begin() + command[i][0] - 1, comamnd[i][1]);
 * 		ret.push_back(array[commands[i][0] + commands[i][2] - 2);
 */
	}
	return ret;
}

