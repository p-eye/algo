
#include <vector>
using namespace std;

vector<int> chk;
vector<int> cpnums;
int answer = 0;

int isprime(int n)
{
    if (n == 1)
        return 0;
    if (n == 2)
        return 1;
    for (int i = 2; i * i <= n; i++)
        if (n % i == 0)
            return 0;
    return 1;
}

void dfs(int lev, int v)
{
    if (lev == 3)
    {
        int sum = 0;
        for (int i = 0; i < cpnums.size(); i++)
            if (chk[i] == 1)
                sum += cpnums[i];
        answer += isprime(sum);
        return;
    }
    for (int i = v; i < cpnums.size(); i++)
    {
        chk[i] = 1;
        dfs(lev + 1, i + 1);
        chk[i] = 0;
    }
}

int solution(vector<int> nums)
{
    int len = nums.size();
    for (int i = 0; i < len; i++)
        chk.push_back(0);
    cpnums = nums;
    dfs(0, 0);
    return answer;
}