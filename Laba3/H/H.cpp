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

    int Counter = 0;

    for (int Index = 0; Index < N; Index++)
    {
        for (int Jindex = 0; Jindex < N; Jindex++)
        {
            Counter += Matrix[Index][Jindex];
        }
        cout << Counter << endl;
        Counter = 0;
    }
}