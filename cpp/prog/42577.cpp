#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int compare(string s1, string s2)
{
    // custom compare 함수 만들 떄 등호 쓰면 segfault 뜰 때도 있다
    return s1.size() < s2.size();
}

bool solution(vector<string> phone_book)
{
    sort(phone_book.begin(), phone_book.end(), compare);
    int len = phone_book.size();

    for (int i = 0; i < len - 1; i++)
    {
        int min = phone_book[i].size();
        for (int k = i + 1; k < len; k++)
        {
            if (phone_book[k].substr(0, min) == phone_book[i])
                return false;
        }
    }
    return true;
}