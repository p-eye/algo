#include <vector>
#include <iostream>

using namespace std;
vector<int> arr;
int n;

void dfs(int v)
{
    if (v == n + 1)
    {
        for (int i = 1; i <= n; i++)
            if (arr[i] == 1)
                cout << i << " ";
        cout << "\n";
        return;
    }
    arr[v] = 1;
    dfs(v + 1);
    arr[v] = 0;
    dfs(v + 1);
}

int main()
{

    cin >> n;
    for (int i = 0; i < n; i++)
        arr.push_back(0);
    dfs(1);
    return 0;
}
