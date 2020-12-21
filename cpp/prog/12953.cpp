#include <string>
#include <vector>

using namespace std;

int gcd(int a, int b)
{
    int temp;
    while (b)
    {
        temp = a % b;
        a = b;
        b = temp;
    }
    return a;
}

int lcm(int a, int b)
{
    return a * b / gcd(a, b);
}

int solution(vector<int> arr)
{
    int len = arr.size();
    int ret = arr[0];

    for (int i = 0; i < len; i++)
        ret = lcm(ret, arr[i]);
    return (ret);
}