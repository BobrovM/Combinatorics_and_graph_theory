﻿// Yandex_Laba2_B1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <stack>

using namespace std;

int main()
{
    stack <int> UsualStack;
    string str;
    int num;

    do
    {
        cin >> str;
        if (str == "push")
        {
            cin >> num;
            UsualStack.push(num);
            cout << "ok" << endl;
        }
        if (str == "pop")
        {
            if (UsualStack.size() == 0)
            {
                cout << "error" << endl;
                continue;
            }
            cout << UsualStack.top() << endl;
            UsualStack.pop();
        }
        if (str == "back")
        {
            if (UsualStack.size() == 0)
            {
                cout << "error" << endl;
                continue;
            }
            cout << UsualStack.top() << endl;
        }
        if (str == "size")
        {
            cout << UsualStack.size() << endl;
        }
        if (str == "clear")
        {
            while (!UsualStack.empty()) UsualStack.pop();
            cout << "ok" << endl;
        }

    } while (str != "exit");
    cout << "bye" << endl;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
