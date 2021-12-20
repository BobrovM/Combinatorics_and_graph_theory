#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int N;
    cin >> N;

    vector<vector<int>> Matrix = vector<vector<int>>{};
    vector<int> VTemp{};

    for (int Index = 0; Index < N; Index++)
    {
        for (int Jindex = 0; Jindex < N; Jindex++)
        {
            int Temp;
            cin >> Temp;
            VTemp.push_back(Temp);
        }
        Matrix.push_back(VTemp);
        VTemp.clear();
    }

    int CounterI = 0, CounterJ = 0;

    for (int Index = 0; Index < N; Index++)
    {
        for (int Jindex = 0; Jindex < N; Jindex++)
        {
            CounterI += Matrix[Index][Jindex];
            CounterJ += Matrix[Jindex][Index];
        }
        cout << CounterJ << endl << CounterI << endl ;
        CounterI = 0;
        CounterJ = 0;
    }
}