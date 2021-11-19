#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> Vec = { 1, 1, 2, 0, 0};
	int N;

	cin >> N;

	for(int count = 1; count < (N / 2) + 1; count++)
	{
		Vec[count * 2] = Vec[count] + 1;
		Vec[count * 2 + 1] = Vec[count + 1] + 1 + Vec[count];
		Vec[count * 2 + 2] = Vec[count * 2 + 1] - Vec[count];

		Vec.push_back(0);
		Vec.push_back(0);
	}

	cout << Vec[N];
}