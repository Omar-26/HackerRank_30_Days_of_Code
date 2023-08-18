#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#define cinn int n ; cin >> n;
#define el "\n"
using namespace std;
//====================================================//
int main()
{
    int ones = 0 , max = 0;
    vector<int> binary;
    cinn
        while (n > 0)
        {
                if (n % 2 == 1)
                {
                    ones++;
                    if (ones > max) max = ones;
                }
                    else ones = 0;
            n /= 2;
        }
        cout << max << el;
    return 0;
} 