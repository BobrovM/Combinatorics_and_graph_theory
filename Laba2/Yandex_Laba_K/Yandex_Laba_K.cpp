#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> Posled = { 1, 1 };
	int N, count = 1;

	cin >> N;
	
	while (count <= N)
	{
		int Tempa2n = Posled[count] + Posled[count - 1];
		int Tempa2n1 = Posled[count] - Posled[count - 1];

		Posled.push_back(Tempa2n);
		Posled.push_back(Tempa2n1);

		count ++;
	}

	cout << Posled[N];
}
