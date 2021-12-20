#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main()
{
    vector<vector<int>> Vec = vector<vector<int>>{};
    int N;
    cin >> N;


    for (int Index = 0; Index < N; Index++)
    {
        vector<int> TempVec{};
        for (int Jindex = 0; Jindex < N; Jindex++)
        {
            int Temp;
            cin >> Temp;
            TempVec.push_back(Temp);
        }
        Vec.push_back(TempVec);
    }


    for (int Index = 0; Index < N; Index++)
    {
        queue<int> Rember;
        for (int Jindex = 0; Jindex < N; Jindex++)
        {
            if (Vec[Index][Jindex] > 0)
            {
                Rember.push(Jindex);
            }
        }
        if (Rember.empty())
        {
            cout << 0 << endl;
        }
        else
        {
            while (!Rember.empty())
            {
                cout << Rember.front() + 1 << " ";
                Rember.pop();
            }
            cout << endl;
        }
    }
}