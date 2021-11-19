#include <iostream>

using namespace std;

long long Fact(int Num)
{
    long long Res = 1;
    for (int Index = 2; Index <= Num; Index++)
    {
        Res *= Index;
    }
    return Res;
}

int main()
{
    int N, M;
    cin >> N;
    cin >> M;
    N--;
    M--;

    cout << (Fact(N + M)) / (Fact(N) * Fact(M));
}
