#include <iostream>
#include<vector>

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

    for (int Index = 0; Index < N; Index++)
    {
        if (Matrix[Index][Index] != 0)
        {
            cout << "YES";
            return 0;
        }
    }



    cout << "NO";
}