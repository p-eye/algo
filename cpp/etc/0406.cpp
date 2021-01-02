#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n;

int compare(vector<int> a, vector<int> b)
{
    if (a[0] == b[0])
        return a[1] < b[1];
    return a[0] < b[0];
}
int main(void)
{
    cin >> n;
    vector<vector<int>> arr(n, vector<int>(2, 0));
    for (int i = 0; i < n; i++)
        cin >> arr[i][0] >> arr[i][1];
    sort(arr.begin(), arr.end(), compare);

    //case1 : O(N*N)
    /*
    int cnt = 0;
    for (int i = 0 ; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i][1] < arr[j][1])
            {
                cnt++;
                break;
            }
        }
    }
    cout << n - cnt;
    */

    //case 2 : O(N)
    int cnt = 1;
    int big = arr[n - 1][1];
    for (int i = n - 2; i >= 0; i--)
    {
        if (arr[i][1] > big)
        {
            cnt++;
            big = arr[i][1];
        }
    }
    cout << cnt;
}
