#include <iostream>
//Упаси меня бог

using namespace std;

int main()
{
    int Balls[3]{0, 1, 1};
    int Step = 0;
    
    cin >> Step;

    for (int Index = 0; Index <= Step; Index++)
    {
        swap(Balls[0], Balls[1]);
        swap(Balls[1], Balls[2]);
        Balls[2] += Balls[0] + Balls[1];
    }

    cout << Balls[0];
}
