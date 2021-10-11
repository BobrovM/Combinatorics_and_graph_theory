#include <iostream>
#include <deque>

using namespace std; //hate

int main()
{
    deque<int> Deck;

    string str;
    int num;

    do
    {
        cin >> str;
        if (str == "push_front")
        {
            cin >> num;
            Deck.push_front(num);
            cout << "ok" << endl;
        }
        if (str == "push_back")
        {
            cin >> num;
            Deck.push_back(num);
            cout << "ok" << endl;
        }
        if (str == "pop_front")
        {
            if (Deck.size() == 0)
            {
                cout << "error" << endl;
                continue;
            }
            cout << Deck.front() << endl;
            Deck.pop_front();
        }
        if (str == "pop_back")
        {
            if (Deck.size() == 0)
            {
                cout << "error" << endl;
                continue;
            }
            cout << Deck.back() << endl;
            Deck.pop_back();
        }
        if (str == "front")
        {
            if (Deck.size() == 0)
            {
                cout << "error" << endl;
                continue;
            }
            cout << Deck.front() << endl;
        }
        if (str == "back")
        {
            if (Deck.size() == 0)
            {
                cout << "error" << endl;
                continue;
            }
            cout << Deck.back() << endl;
        }
        if (str == "size")
        {
            cout << Deck.size() << endl;
        }
        if (str == "clear")
        {
            while (!Deck.empty()) Deck.pop_front();
            cout << "ok" << endl;
        }

    } while (str != "exit");
    cout << "bye" << endl;
}