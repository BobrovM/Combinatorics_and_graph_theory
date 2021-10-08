#include <iostream>
#include <queue>

using namespace std;

int main()
{
    queue <int> TheQueue;
    string str;
    int num;

    do
    {
        cin >> str;
        if (str == "push")
        {
            cin >> num;
            TheQueue.push(num);
            cout << "ok" << endl;
        }
        if (str == "pop")
        {
            cout << TheQueue.front() << endl;
            TheQueue.pop();
        }
        if (str == "front")
        {
            cout << TheQueue.front() << endl;
        }
        if (str == "size")
        {
            cout << TheQueue.size() << endl;
        }
        if (str == "clear")
        {
            while (!TheQueue.empty()) TheQueue.pop();
            cout << "ok" << endl;
        }

    } while (str != "exit");
    cout << "bye" << endl;
}