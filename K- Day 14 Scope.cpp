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

class Difference
{
    vector<int> elements;

public:
    Difference(vector<int> userElements) : elements(userElements) { computeDifference(); };
    void computeDifference()
    {
        // We already Know That The Maximum difference is the difference between the largest element and the smallest element
        sort(elements.begin(), elements.end());
        cout << abs(elements[elements.size() - 1] - elements[0]);
    };
};

int main()
{
    int N, element;
    vector<int> elements;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> element;
        elements.push_back(element);
    }
    Difference diff(elements);
    return 0;
}
