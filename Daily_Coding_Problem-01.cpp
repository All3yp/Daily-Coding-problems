/*
    🌽  Daily Coding Problem: Problem #1 [Easy] 🌽

This problem was recently asked by Google.
Given a list of numbers and a number k, return whether any two numbers 
rom the list add up to k.
For example, given [10, 15, 3, 7] and k of 17, return true since 10 + 7 is 17.

Bonus: Can you do this in one pass?
*/

// SOLUTION ✨
#include <iostream>
using namespace std;

bool listAdd(const int list[], int k, int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; i++)
        {
            if (list[i] + list[j] == k)
                return true;
        }
    }
    return false;
}

int main()
{
    int list[4] = {10, 15, 3, 7};
    int k = 17;
    int size = 4;
    cout << listAdd(list, k, size) << endl;
}
