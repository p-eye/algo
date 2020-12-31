#include <iosteam>
#include <vector>

using namespace std;

vector<int> arr;
int n, m;
int cnt;

void printarr(void)
{
    for (int i = 0; i < m; i++)
        cout << arr[i] << " ";
    cout << endl;
    cnt++;
}

void dfs(int level, int v)
{
    if (level == m)
    {
        printarr();
        return;
    }
    for (int i = v; i <= n; i++)
    {
        arr[level] = v;
        dfs(level + 1, v + 1);
    }
}

int main(void)
{
    cin >> n >> m;
    for (int i = 0; i < m; i++)
        arr.push_back(0);
    // 1 : 가지를 뻗는 첫번째 숫자
    dfs(0, 1);
    cout << cnt << endl;
}