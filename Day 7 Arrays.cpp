#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#define cinn int n;cin >> n;
using namespace std;

int main()
{
    //====================================================//
    cinn;
    vector<int> nums(n);
    for (int arr_i = 0; arr_i < n; arr_i++)
        cin >> nums[arr_i];
    for (int arr_j = n - 1; arr_j >= 0; arr_j--)
        cout << nums[arr_j] << " ";
    return 0;
}
