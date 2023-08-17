#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

//====================================================//
int factorial(int N)
{
    // Our Base Case
    if (N <= 1)
        return 1;
    return N * factorial(N - 1);
}

int main()
{
    int N;
    cin >> N;
    cout << factorial(N);
    return 0;
}