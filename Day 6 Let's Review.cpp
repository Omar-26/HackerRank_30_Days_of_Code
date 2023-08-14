/*Author: Omar Ashraf*/
/*
_______/\\\\\_________________/\\\\____________/\\\\_______________/\\\\\\\\\_________________/\\\\\\\\\_____
 _____/\\\///\\\______________\/\\\\\\________/\\\\\\_____________/\\\\\\\\\\\\\_____________/\\\///////\\\___
  ___/\\\/__\///\\\____________\/\\\//\\\____/\\\//\\\____________/\\\/////////\\\___________\/\\\_____\/\\\___
   __/\\\______\//\\\___________\/\\\\///\\\/\\\/_\/\\\___________\/\\\_______\/\\\___________\/\\\\\\\\\\\/____
    _\/\\\_______\/\\\___________\/\\\__\///\\\/___\/\\\___________\/\\\\\\\\\\\\\\\___________\/\\\//////\\\____
     _\//\\\______/\\\____________\/\\\____\///_____\/\\\___________\/\\\/////////\\\___________\/\\\____\//\\\___
      __\///\\\__/\\\______________\/\\\_____________\/\\\___________\/\\\_______\/\\\___________\/\\\_____\//\\\__
       ____\///\\\\\/_______________\/\\\_____________\/\\\___________\/\\\_______\/\\\___________\/\\\______\//\\\_
        ______\/////_________________\///______________\///____________\///________\///____________\///________\///__
*/
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
