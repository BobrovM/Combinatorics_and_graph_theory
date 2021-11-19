#include <iostream>
#include <vector>

using namespace std;

int main()
{
    /*const int Nmax = 350, Mmax = 350;*/
    int N, M;

    cin >> N;
    cin >> M;

    vector<vector<int>> Path(N, vector<int> (M));

    for (int Index = 0; Index < N; Index++)
    {
        for (int Jindex = 0; Jindex < M; Jindex++)
        {
            cin >> Path[Index][Jindex];
        }
    }

    for (int Index = 0; Index < N; Index++)
    {
        for (int Jindex = 0; Jindex < M; Jindex++)
        {
            if (Path[Index][Jindex] == 0) continue;
            if (Index != 0 && Jindex != 0) Path[Index][Jindex] = Path[Index - 1][Jindex] + Path[Index][Jindex - 1];
            else if (Jindex != 0) Path[Index][Jindex] = Path[Index][Jindex - 1];
            else if (Index != 0) Path[Index][Jindex] = Path[Index - 1][Jindex];
        }
    }

    if (Path[N - 1][M - 1] == 0) cout << "Impossible";
    else cout << Path[N - 1][M - 1];

    /*int Array[Nmax][Mmax] = {};
    int ArrayPath[Nmax][Mmax] = {};*/

    /*for (int Index = 0; Index < N; Index++)
    {
        for (int Jindex = 0; Jindex < M; Jindex++)
        {
            cin >> Array[Index][Jindex];
        }
    }

    ArrayPath[0][0] = 1;

    for (int Index = 0; Index < N; Index++)
    {
        for (int Jindex = 0; Jindex < M; Jindex++)
        {
            if (Array[Index][Jindex] == 0) continue;
            if (Index != 0 && Jindex != 0) ArrayPath[Index][Jindex] = ArrayPath[Index - 1][Jindex] + ArrayPath[Index][Jindex - 1];
            else if (Jindex != 0) ArrayPath[Index][Jindex] = ArrayPath[Index][Jindex - 1];
            else if (Index !=0) ArrayPath[Index][Jindex] = ArrayPath[Index - 1][Jindex];
        }
    }

    if (ArrayPath[N - 1][M - 1] == 0) cout << "Impossible";
    else cout << ArrayPath[N - 1][M - 1];*/
}