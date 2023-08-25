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
