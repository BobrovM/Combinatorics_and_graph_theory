#include <iostream>
#include <cmath>

using namespace std;

int A, B, C, D;

double Func(double X)
{
    return A * X * X * X + B * X * X + C * X + D;
}

int main()
{
    cin >> A >> B >> C >> D;

    if (A < 0)
    {
        A = -A;
        B = -B;
        C = -C;
        D = -D;
    }

    double Left, Right, Middle;
    Right = pow(10, 9);
    Left = pow(-10, 9);

    while (Right - Left > pow(10, -6))
    {
        Middle = (Left + Right) / 2;
        if (Func(Middle) > 0) Right = Middle;
        else Left = Middle;
    }
    
    cout << Middle;
}