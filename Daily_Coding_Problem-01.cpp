/* MARK: - SOLUTION ✨ */

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

/* MARK: - Main func */
int main()
{
    int list[4] = {10, 15, 3, 7};
    int k = 17;
    int size = 4;
    cout << listAdd(list, k, size) << endl;
}
