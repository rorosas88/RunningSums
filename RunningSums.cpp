// RunningSums.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

std::vector<int> runningSum(std::vector<int>& nums)
{
    int nRunningSum = 0; 
    std::vector<int> returnvalue{0};
    for (int i = 0; i < nums.size(); i++) 
    {
        nRunningSum = nRunningSum + nums[i];
        returnvalue[i] = nRunningSum;
    }

    return { returnvalue };
}

int main()
{
    //enter input into nums
    std::vector<int> input{ 1,2,3,4 };

    std::vector<int> output{ 0 };

   output = runningSum(input);

    for (int i = 0; i < output.size(); i++) 
    {
        std::cout << output[i] << "\n";
    }
}