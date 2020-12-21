#include <string>
#include <vector>
#include <queue>

using namespace std;

int solution(int bridge_length, int weight, vector<int> truck_weights)
{

    queue<int> qu;
    int sum = 0;
    int cnt = 0;
    int len = truck_weights.size();

    for (int i = 0; i < bridge_length; i++)
        qu.push(0);
    for (int i = 0; i < len; i++)
    {
        int n = truck_weights[i];
        while (sum + n - qu.front() > weight)
        {
            sum = sum - qu.front() + 0;
            qu.push(0);
            qu.pop();
            cnt++;
        }
        sum = sum - qu.front() + n;
        qu.push(n);
        qu.pop();
        cnt++;
    }
    cnt += bridge_length;
    return cnt;
}