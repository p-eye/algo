#include <string>
#include <vector>

vector<int> solution(vector<int> prices)
{

    int len = prices.size();
    vector<int> answer(len, 0);
    for (int i = 0; i < len - 1; i++)
    {
        int cnt = 0;
        int n = prices[i];
        for (int j = i + 1; j < len; j++)
        {
            cnt++;
            if (prices[j] < n)
                break;
        }
        answer[i] = cnt;
    }
    return answer;
}
