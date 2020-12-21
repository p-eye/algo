#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(int n)
{

    char code[3] = {'4', '1', '2'};
    string answer = "";

    while (n)
    {
        int temp = n % 3;
        n /= 3;
        if (temp == 0)
            n -= 1;
        answer += code[temp];
    }
    reverse(answer.begin(), answer.end());
    return answer;
}