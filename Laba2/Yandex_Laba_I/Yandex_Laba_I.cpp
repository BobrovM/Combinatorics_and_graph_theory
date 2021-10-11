#include <iostream>
#include <queue>

using namespace std;

int main()
{
    intmax_t Number = 0;
    cin >> Number;
    
    queue<intmax_t> FQueue;
    FQueue.push(1);
    FQueue.push(1);
    intmax_t Temp = 0;

    for (int Index = 0; Index < Number; Index++)
    {
        Temp = FQueue.front();
        FQueue.pop();
        FQueue.push((Temp + FQueue.front()) % 10);
    }

    cout << FQueue.front();
}