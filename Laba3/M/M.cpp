#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int N;
    cin >> N;

    vector<vector<int>> Vec = vector<vector<int>>{};

    for (int Index = 0; Index < N; Index++)
    {
        vector<int> TempVec{};
        for (int Jindex = 0; Jindex < N; Jindex++)
        {
            TempVec.push_back(0);
        }
        Vec.push_back(TempVec);
    }

    for (int Index = 0; Index < N; Index++)
    {
        int M;
        cin >> M;
        for (int Jindex = 0; Jindex < M; Jindex++)
        {
            int Input;
            cin >> Input;
            Vec[Index][Input - 1] += 1;
        }
    }

    for (int Index = 0; Index < N; Index++)
    {
        for (int Jindex = 0; Jindex < N; Jindex++)
        {
            cout << Vec[Index][Jindex] << " ";
        }
        cout << endl;
    }
}