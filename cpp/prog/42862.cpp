#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve)
{
    vector<int> people(n + 1, 1);
    people[0] = 0;

    for (int i = 0; i < lost.size(); i++)
        people[lost[i]] -= 1;
    for (int i = 0; i < reserve.size(); i++)
        people[reserve[i]] += 1;
    for (int i = 0; i < lost.size(); i++)
    {
        int n = lost[i];
        if (people[n] == 0 && people[n - 1] == 2)
        {
            people[n] = 1;
            people[n - 1] = 1;
        }
        else if (people[n] == 0 && people[n + 1] == 2)
        {
            people[n] = 1;
            people[n + 1] =1;
        }
    }
    int answer = (n + 1) - count(people.begin(), people.end(), 0);
    return answer;
}