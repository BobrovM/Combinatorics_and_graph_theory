#include <iostream>
#include <string>

using namespace std;

int main()
{
    string Line;
    cin >> Line;

    int AmountNumbers = 0;
    for (int Index = 0; Index < Line.length(); Index++)
    {
        if (isdigit(Line[Index]))
        {
            AmountNumbers++;
        }
    }

    cout << AmountNumbers;
}