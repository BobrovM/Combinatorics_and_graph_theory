#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> vFib;
    vFib.push_back(1);
    vFib.push_back(1);

    int Number, Counter = 2;
    cin >> Number;

    while (vFib.back() < Number)
    {
        vFib.push_back(vFib.front() + vFib.back());
        vFib[0] = vFib[1];
        vFib[1] = vFib[2];
        vFib.pop_back();
        Counter++;
    }

    if (vFib.back() == Number)
    {
        cout << Counter;
    }
    else
    {
        cout << -1;
    }
}
