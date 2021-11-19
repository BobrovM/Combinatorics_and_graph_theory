#include <iostream>

using namespace std;

int main()
{
    int StrCst[100]{};
    int StrMax;
    cin >> StrMax;

    for (int Index = 0; Index < StrMax; Index++)
    {
        cin >> StrCst[Index];
    }

    for (int Index = 2; Index < StrMax; Index++)
    {
        StrCst[Index] += min(StrCst[Index - 1], StrCst[Index - 2]);
    }

    cout << StrCst[StrMax - 1];
}