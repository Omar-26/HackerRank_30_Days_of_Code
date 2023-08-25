#include <bits/stdc++.h>

using namespace std;

int main()
{
    string S;
    getline(cin, S);
    int string_Int;
    try
    {
        string_Int = stoi(S);
    }
    catch (exception &err)
    {
        cout << "Bad String" << endl;
        return 0;
    }
    cout << string_Int;
}
