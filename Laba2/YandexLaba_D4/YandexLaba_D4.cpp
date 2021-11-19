#include <iostream>

using namespace std;

int main()
{
    const int Nmax = 20, Mmax = 20;
    int N, M;

    cin >> N;
    cin >> M;

    int ArrayFood[Nmax][Mmax] = {};
    int ArrayPath[Nmax][Mmax] = {};

    for (int Index = 0; Index < N; Index++)
    {
        for (int Jindex = 0; Jindex < M; Jindex++)
        {
            cin >> ArrayFood[Index][Jindex];
        }
    }

    ArrayPath[0][0] = ArrayFood[0][0];

    for (int Jindex = 1; Jindex < M; Jindex++)
    {
        ArrayPath[0][Jindex] = ArrayPath[0][Jindex - 1] + ArrayFood[0][Jindex];
    }

    for (int Index = 1; Index < N; Index++)
    {
        ArrayPath[Index][0] = ArrayPath[Index - 1][0] + ArrayFood[Index][0];
    }

    for (int Index = 1; Index < N; Index++)
    {
        for (int Jindex = 1; Jindex < M; Jindex++)
        {
            if (ArrayPath[Index - 1][Jindex] < ArrayPath[Index][Jindex - 1])
            {
                ArrayPath[Index][Jindex] = ArrayPath[Index - 1][Jindex] + ArrayFood[Index][Jindex];
            }
            else
            {
                ArrayPath[Index][Jindex] = ArrayPath[Index][Jindex - 1] + ArrayFood[Index][Jindex];
            }
        }
    }

    cout << ArrayPath[N - 1][M - 1];
}