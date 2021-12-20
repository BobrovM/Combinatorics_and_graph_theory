#include <iostream>
#include <vector>
#include <queue>

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

    for (int Index = 0; Index < M; Index++)
    {
        int In1, In2;
        cin >> In1 >> In2;

        Matrix[In1 - 1][In2 - 1] += 1;
        Matrix[In2 - 1][In1 - 1] += 1;
    }

    int Counter = 0;
    queue<int> Indexes{};

    for (int Index = 0; Index < N; Index++)
    {
        for (int Jindex = 0; Jindex < N; Jindex++)
        {
            if (Matrix[Index][Jindex] > 0)
            {
                Counter += Matrix[Index][Jindex];
                Indexes.push(Jindex + 1);
            }
        }
        //if (Counter != 0) 
        //{
            cout << Counter << " ";
            while (!Indexes.empty())
            {
                cout << Indexes.front() << " ";
                Indexes.pop();
            }
            cout << endl;
        //}
        

        Counter = 0;
    }
}