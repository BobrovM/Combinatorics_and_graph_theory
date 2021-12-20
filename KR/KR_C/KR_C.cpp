#include <iostream>
#include <vector>

int main()
{
    std::vector<std::vector<int>> Vec{};

    int Size, Lines;
    std::cin >> Size;
    std::cin >> Lines;

    for (int Index = 0; Index < Size; Index++)
    {
        std::vector<int> TempVec{};
        for (int Jindex = 0; Jindex < Size; Jindex++)
        {
            TempVec.push_back(0);
        }
        Vec.push_back(TempVec);
    }

    for (int Index = 0; Index < Lines; Index++)
    {
        int Ind;
        int Jind;
        std::cin >> Ind >> Jind;

        Ind -= 1;
        Jind -= 1;

        Vec[Ind][Jind] += 1;
        Vec[Jind][Ind] += 1;
    }

    for (int Index = 0; Index < Size; Index++)
    {
        for (int Jindex = Index + 1; Jindex < Size; Jindex++)
        {
            if (Vec[Index][Jindex] != 1)
            {
                std::cout << "NO";
                return 0;
            }
        }
    }

    std::cout << "YES";
}
