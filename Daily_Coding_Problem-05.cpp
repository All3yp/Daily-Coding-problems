/* MARK: - SOLUTION ✨ */

#include "Daily_Coding_Problem.h"

// MARK: - Solution

// This is the implementation of cons function
pair<int, int>cons(int a, int b) {
    return make_pair(a, b);
}

// This is the implementation of car function that returns the first element of the pair (a)
int car(pair<int, int> p) {
    return p.first;
}

// This is the implementation of cdr function that returns the last element of the pair (b)
int cdr(pair<int, int> p) {
    return p.second;
}

// MARK: - Main func
int main()
{
    pair<int, int> p = cons(3,4);
    cout << car(p) << endl;
    cout << cdr(p) << endl;
}
