#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int k, n;

int main(void)
{
    cin >> k >> n;
    vector<int> arr(k, 0);
    for (int i = 0; i < k; i++)
        cin >> arr[i];

    // case 1: sum 오버플로우때문에 불가능
    vector<int> modd(k, 0);

    int cnt = 1;
    while (1)
    {
        unsigned long long sum = 0;
        for (int i = 0; i < k; i++)
        {
            modd[i] = arr[i] / cnt;
            sum += modd[i];
        }
        if (sum < n)
            break;
        cnt++;
    }
    printf("%d\n", cnt - 1);
}