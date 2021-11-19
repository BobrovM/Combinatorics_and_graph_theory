#include <iostream>
#include <vector>
#include <stack>
#include <string>

using namespace std;

int main()
{
    int N;
    cin >> N;

    vector<int> Path{0, 0};

    for(int Index = 2; Index <= N; Index++)
    {
        int Min = Path[Index - 1] + 1;
        if (Index % 2 == 0) Min = min(Min, Path[Index / 2] + 1);
        if (Index % 3 == 0) Min = min(Min, Path[Index / 3] + 1);

        Path.push_back(Min);
    }

    int Index = N;
    stack<int> Stack;

    while (Index > 1)
    {
        if (Path[Index] == Path[Index - 1] + 1)
        {
            Index--;
            Stack.push(Index);
            continue;
        }

        if (Index % 2 == 0 && Path[Index] == Path[Index / 2] + 1)
        {
            Index /= 2;
            Stack.push(Index);
            continue;
        }

        Index /= 3;
        Stack.push(Index);
    }

    cout << Path[N] << endl;
    string Str;
    while (!Stack.empty())
    {
        Str += to_string(Stack.top());
        //Str += " ";
        Stack.pop();
    }
    Str +=to_string(N);

    cout << Str;
}
