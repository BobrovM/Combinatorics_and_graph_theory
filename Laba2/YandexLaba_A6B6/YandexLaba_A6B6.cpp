#include <iostream>
#include <vector>
#include <algorithm>
#include <sstream>

using namespace std;

int main()
{
    vector<int> Heap{};

    make_heap(Heap.begin(), Heap.end());

    string Input;

    getline(cin, Input);

    while (!Input.empty())
    {
        if (Input.substr(0, 3) == "ADD")
        {
            int TempSize = Input.size() - 4;
            int TempInt = stoi(Input.substr(4, TempSize));
            Heap.push_back(TempInt);
            push_heap(Heap.begin(), Heap.end());
        }
        if (Input == "EXTRACT")
        {
            if (Heap.size() == 0)
            {
                cout << "CANNOT" << endl;
            }
            else
            {
                cout << Heap.front() << endl;
                pop_heap(Heap.begin(), Heap.end());
                Heap.pop_back();
            }
        }
        if (Input == "CLEAR")
        {
            Heap.clear();
        }

        Input.clear();
        getline(cin, Input);
    }
}