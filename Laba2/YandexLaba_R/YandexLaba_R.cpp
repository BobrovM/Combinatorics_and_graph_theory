#include <iostream>
#include <queue>
//#include <stdio.h>

using namespace std;

int main()
{
	int GvozdiSize = 0;
	int GvozdiCoord[101]{};
	int Divider = 1;
	int InputIndex = 0;
	cin >> GvozdiSize;
	for (int Index = 1; Index <= GvozdiSize; Index++)
	{
		cin >> GvozdiCoord[Index];
	}
	queue<int> NumberQueue[10];

	for (int Index = 0; Index < 5; Index++)
	{
		for (int Jindex = 0; Jindex <= GvozdiSize; Jindex++)
		{
			int TempQueueIndex = GvozdiCoord[Jindex] / Divider % 10;
			NumberQueue[TempQueueIndex].push(GvozdiCoord[Jindex]);
		}
		Divider *= 10;
		InputIndex = 0;
		for (int Jindex = 0; Jindex < 10; Jindex++)
		{
			while (NumberQueue[Jindex].size() != 0)
			{
				GvozdiCoord[InputIndex] = NumberQueue[Jindex].front();
				NumberQueue[Jindex].pop();
				InputIndex++;
			}
		}
	}

	int Nitki[101]{};
	Nitki[2] = GvozdiCoord[2] - GvozdiCoord[1];
	Nitki[3] = GvozdiCoord[3] - GvozdiCoord[1];

	for (int Index = 4; Index <= GvozdiSize; Index++)
	{
		Nitki[Index] = min(Nitki[Index - 1], Nitki[Index - 2]) + GvozdiCoord[Index] - GvozdiCoord[Index - 1];
	}

	cout << Nitki[GvozdiSize];
}