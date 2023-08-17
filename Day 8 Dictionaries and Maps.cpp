#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <unordered_map>
#define el "\n"
using namespace std;

int main()
{
    int n, phone;
    cin >> n;
    string name, query;
    unordered_map<string, int> entries;
    for (int i = 0; i < n; i++)
    {
        cin >> name >> phone;
        entries[name] = phone;
    }
    while (cin >> query)
    {
        if (entries.find(query) != entries.end())
            cout << query << "=" << entries[query] << el;
        else
            cout << "Not found" << el;
    }
    return 0;
}
/*
! This is another way but if failed because of the Time Limit
int main()
{
    int n, flag;
    cin >> n;
    string name, phone, query, foundName, foundNumber;
    unordered_map<string, string> entries;
    for (int i = 0; i < n; i++)
    {
        cin >> name >> phone;
        entries.insert(pair<string, string>(name, phone));
    }
    while (cin >> query)
    {
        flag = false;
        for (auto pair : entries)
        {
            if (query == pair.first)
            {
                foundName = pair.first;
                foundNumber = pair.second;
                flag = true;
            }
        }
        if (flag)
            cout << foundName << "=" << foundNumber << el;
        else
            cout << "Not found " << el;
    }
    return 0;
}
*/
