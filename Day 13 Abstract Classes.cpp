#include<cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
#define el "\n"
using namespace std;
class Book
{
protected:
    string title;
    string author;

public:
    Book(string t, string a)
    {
        title = t;
        author = a;
    }
    virtual void display() = 0;
};
class MyBook : public Book
{
protected:
    int price;

public:
    MyBook(string mytitle, string myauthor, int myprice) : Book(mytitle, myauthor)
    {
        price = myprice;
    };
    void display()
    {
        cout << "Title: " << title << el;
        cout << "Author: " << author << el;
        cout << "Price: " << price << el;
    };
};
int main()
{
    string title, author;
    int price;
    getline(cin, title);
    getline(cin, author);
    cin >> price;
    MyBook novel(title, author, price);
    novel.display();
    return 0;
}