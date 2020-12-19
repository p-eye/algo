#include <string>
#include <vector>
#include <map>

using namespace std;

int solution(vector<vector<string>> clothes)
{
    map<string, int>ma;
    int ret = 1;

    // map에 insert pair 따로 안해줘도, 이렇게 바로 생성하면서 넣을 수 있음. 생성하자마자 초기 value는 0
    for (int i = 0; i < clothes.size(); i++)
        ma[clothes[i][1]] += 1;

    for (auto it = ma.begin(); it != ma.end() i++)
        ret *= it->second + 1;
    return ret - 1;
}