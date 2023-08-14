#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    //====================================================//
    int numOfTestCases;
    string s, even, odd;
    cin >> numOfTestCases;
    cin.ignore(); // its essential to make getline function work properly
    for (int j = 1; j <= numOfTestCases; j++)
    {
        getline(cin, s);
        even = odd = "";
        for (int i = 0; i < s.size(); i++)
        {
            if (i % 2 == 0)
                even += s[i];
            else
                odd += s[i];
        }
        cout << even << " " << odd << endl;
    }
    return 0;
}
