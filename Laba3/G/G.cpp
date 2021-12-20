#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;

    vector<vector<int>> Matrix = vector<vector<int>>{};
    vector<int> VTemp{};

    for (int Index = 0; Index < N; Index++)
    {
        for (int Jindex = 0; Jindex < N; Jindex++)
        {
            VTemp.push_back(0);
        }
        Matrix.push_back(VTemp);
        VTemp.clear();
    }

    int Counter = 0;

    for (int Index = 0; Index < M; Index++)
    {
        int In1, In2;
        cin >> In1 >> In2;

        Matrix[In1 - 1][In2 - 1] += 1;
    }

    for (int Index = 0; Index < N - 1; Index++)
    {
        for (int Jindex = 0; Jindex < N - 1; Jindex++)
        {
            if (Matrix[Index][Jindex] > 1)
            {
                cout << "YES";
                return 0;
            }
        }
    }

    cout << "NO";
}