#include <string>
#include <vector>
#include <deque>

using namespace std;

int solution(string skill, vector<string> skill_trees)
{
    int answer = 0;
    int len = skill_trees.size();

    for (int i = 0; i < len; i++)
    {
        string str = skill_trees[i];
        deque<char> qu;
        // 큐 만들기
        for (int k = 0; k < str.size(); k++)
        {
            for (int m = 0; m < skill.size(); m++)
            {
                if (str[k] == skill[m])
                {
                    qu.push_back(str[k]);
                    break;
                }
            }
        }

        // 큐 탐색
        int cnt = 1;
        for (int a = 0; a < qu.size(); a++)
        {
            if (qu[a] != skill[a])
            {
                cnt = 0;
                break;
            }
        }
        answer += cnt;
    }
    return answer;
}