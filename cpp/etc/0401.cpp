#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n, m;

int main(void)
{
    cin >> n >> m;
    vector<int> arr(n, 0);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    sort(arr.begin(), arr.end(), less<int>());

    int lt = 0;
    int rt = n - 1;
    int mid;
    int answer = 0;

    while (lt <= rt)
    {
        mid = (lt + rt) / 2;
        if (arr[mid] == m)
        {
            answer = mid;
            break;
        }
        if (arr[mid] > m)
            rt = mid - 1;
        else
            lt = mid + 1;
    }
    cout << answer + 1 << endl;
}