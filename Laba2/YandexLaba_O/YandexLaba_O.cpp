#include <iostream>
//#include <cmath>

using namespace std;

int main()
{
	int ArrayA[21]{ 0, 1 };
	int ArrayB[21]{ 0, 1 };
	int ArrayC[21]{ 0, 1 };

	int N;
	cin >> N;

	for (int Index = 2; Index <= N; Index++)
	{
		ArrayA[Index] = ArrayB[Index - 1] + ArrayC[Index - 1];
		ArrayB[Index] = ArrayA[Index - 1] + ArrayB[Index - 1] + ArrayC[Index - 1];
		ArrayC[Index] = ArrayA[Index - 1] + ArrayB[Index - 1] + ArrayC[Index - 1];
		/*cout << ArrayA[Index] << " ";
		cout << ArrayB[Index] << " ";
		cout << ArrayC[Index] << endl;*/
	}

	cout << ArrayC[N] + ArrayA[N] + ArrayB[N] << endl;
}
	/*int N;
	cin >> N;
	int Ways[21]{ 1, 3 };

	for (int Index = 2; Index <= N; Index++)
	{
		Ways[Index] = 2 * (Ways[Index - 1] + Ways[Index - 2]);
	}

	cout << Ways[N];*/