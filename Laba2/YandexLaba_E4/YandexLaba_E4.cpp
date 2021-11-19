#include <iostream>

using namespace std;

int main()
{
    const int NMmax = 8;
    int N, M;

    cin >> M;
    cin >> N;

    int Array[NMmax][NMmax] = {};
    
    Array[N - 1][M - 1] = 1;

    for (int Index = N; Index < 8; Index++)
    {
        for (int Jindex = 1; Jindex < 8; Jindex++)
        {
            Array[Index][Jindex - 1] += Array[Index - 1][Jindex];
            Array[Index][Jindex] += Array[Index - 1][Jindex - 1];
        }
    }

    int Sum = 0;

    for (int Jindex = 0; Jindex < 8; Jindex++)
    {
        Sum += Array[7][Jindex];
    }

    cout << Sum;
}