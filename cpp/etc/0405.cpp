#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n;

int compare(vector<int> a, vector<int> b)
{
    if (a[1] == b[1])
        return a[0] < b[0];
    return a[1] < b[1];
}

int main(void)
{
    cin >> n;
    vector<vector<int>> arr(n, vector<int>(n, 0));
    for (int i = 0; i < n; i++)
        cin >> arr[i][0] >> arr[i][1];

    sort(arr.begin(), arr.end(), compare);

    int answer = 0;
    int i = 0;
    while (i < n)
    {
        int temp = arr[i][1];
        while (i < n && arr[i][0] < temp)
            i++;
        answer++;
    }
    cout << answer;
}