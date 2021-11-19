#include <iostream>

using namespace std;

int main()
{
    const int Nmax = 52, Mmax = 52;
    int N, M;

    int Array[Nmax][Mmax] = {};

    cin >> N;
    cin >> M;

    N++;
    M++;

    Array[2][2] = 1;

    for (int Index = 2; Index <= N; Index++)
    {
        for (int Jindex = 2; Jindex <= M; Jindex++)
        {
            Array[Index][Jindex] += Array[Index - 2][Jindex - 1] + Array[Index - 1][Jindex - 2];
        }
    }

    cout << Array[N][M];
}