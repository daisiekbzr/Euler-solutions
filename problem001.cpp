#include <iostream>
#include <vector>

void solution1(int maxNumber, int mod1, int mod2);

int main()
{
    solution1(1000, 3, 5);

    return 0;
}

void solution1(int maxNumber, int mod1, int mod2)
{
    int solution = 0;
    std::vector<int> nrList;

    for (int i = 0; i < maxNumber; ++i)
    {
        solution += ((i % mod1 == 0) || (i % mod2 == 0)) ? i : 0;

        if (i != 0)
        {
            nrList.push_back(i);
        }
    }
    std::cout << "Sum of S(" << maxNumber << ") = " << solution << std::endl;
    std::cout << "List of numbers:" << std::endl;

    for (int i = 0; i < nrList.size(); ++i)
    {
        std::cout << i << std::endl;
    }
}