#include <iostream>
#include <queue>
#include<stdio.h>

using namespace std;

int main()
{
	int ArrayOfNumbers[100000];
	int Size = 0;
	int Divider = 1;
	int InputIndex = 0;
	cin >> Size;
	for  (int Index = 0; Index < Size; Index++)
	{
		cin >> ArrayOfNumbers[Index];
	}
	queue<int> NumberQueue[10];

	for (int Index = 0; Index < 9; Index++)
	{
		for (int Jindex = 0; Jindex < Size; Jindex++)
		{
			int TempQueueIndex = ArrayOfNumbers[Jindex] / Divider % 10;
			NumberQueue[TempQueueIndex].push(ArrayOfNumbers[Jindex]);
		}
		Divider *= 10;
		InputIndex = 0;
		for (int Jindex = 0; Jindex < 10; Jindex++)
		{
			while (NumberQueue[Jindex].size() != 0)
			{
				ArrayOfNumbers[InputIndex] = NumberQueue[Jindex].front();
				NumberQueue[Jindex].pop();
				InputIndex++;
			}
		}
	}

	for (int Index = 0; Index < Size; Index++)
	{
		cout << ArrayOfNumbers[Index] << ' ';
	}
}