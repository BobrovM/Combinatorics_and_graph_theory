#include <iostream>
#include <vector>
#include <string>

int main()
{
    std::vector<std::vector<std::string>> ClassList{};

    while (true)
    {
        std::vector<std::string> TempVec;
        std::string TempStr;

        std::getline(std::cin, TempStr);
        if (TempStr.empty())
        {
            break;
        }

        char Delimiter = ' ';
        int Counter = 0;
        for (int Index = 0; Index < TempStr.size(); Index++)
        {
            if (TempStr[Index] == Delimiter)
            {
                break;
            }
            Counter++;
        }

        TempVec.push_back(TempStr.substr(0, Counter));
        TempVec.push_back(TempStr.substr(Counter + 1, TempStr.size() - Counter));

        ClassList.push_back(TempVec);
    }

    int Counter = 0;

    while (ClassList.size() - 1 >= Counter)
    {
        for (int Index = 0; Index < ClassList.size() - 1 - Counter; Index++)
        {
            if (stoi(ClassList[Index][0]) > stoi(ClassList[Index + 1][0]))
            {
                std::vector<std::string> TempVec;
                TempVec = ClassList[Index + 1];
                ClassList[Index + 1] = ClassList[Index];
                ClassList[Index] = TempVec;
            }
        }
        
        Counter++;
    }

    for (int Index = 0; Index < ClassList.size(); Index++)
    {
        std::cout << ClassList[Index][0] << " " << ClassList[Index][1] << std::endl;
    }
}
