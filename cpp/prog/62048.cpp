using namespace std;

int gcd(int a, int b)
{
    int temp;
    while (b)
    {
        temp = a % b;
        a = b;
        b = temp;
    }
    return a;
}

long long solution(int w, int h)
{
    long long answer;
    int _gcd = gcd(w, h);
    int w1 = w / _gcd;
    int h1 = h / _gcd;

    // int sth = w1 * h1 - (w1 + h1 - 1);
    //  answer = w * h - w1 * h1 * gcd + gcd * sth;
    // answer = w * h - w1 * h1 * gcd + gcd * (w1 * h1 - w1 - h1 + 1);
    answer = (long long)w * h - _gcd * (w1 + h1 - 1);
    return answer;
}
