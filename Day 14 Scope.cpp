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