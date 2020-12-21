#include <string>
#include <vector>
#include <algorithm>
#include <queue>
#include <cmath>

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds)
{
    vector<int> answer;
    int len = progresses.size();
    queue<int> qu;

    // double 쓰는 이유 : int / int 하면 소수점 다 떼져서
    for (int i = 0; i < len; i++)
        qu.push(ceil((100 - progresses[i]) / (double)speeds[i]));

    int cnt = 0;
    while (!qu.empty())
    {
        cnt = 1;
        int temp = qu.front();
        qu.pop();
        while (!qu.empty() && qu.front() <= temp)
        {
            qu.pop();
            cnt++;
        }
        answer.push_back(cnt);
    }
    return answer;
}
