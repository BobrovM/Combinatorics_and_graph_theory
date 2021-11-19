#include <iostream>

using namespace std;

int main()
{
    int N;
    cin >> N;

    if (N != 0)
    {
        int Array[30][30]{};
        Array[0][0] = 1;
        for (int Index = 1; Index < N; Index++)
        {
            Array[Index][0] = 1;
            Array[Index][Index] = 1;
            for (int Jindex = 1; Jindex < Index; Jindex++)
            {
                Array[Index][Jindex] = Array[Index - 1][Jindex - 1] + Array[Index - 1][Jindex];
            }
        }

        for (int Index = 0; Index < N; Index++)
        {
            for (int Jindex = 0; Jindex <= Index; Jindex++)
            {
                cout << Array[Index][Jindex] << " ";
            }
            cout << endl;
        }
    }
}
