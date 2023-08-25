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

class person
{
protected:
    string firstName, lastName;
    int idNumber;

public:
    void printPerson();
    person(string fN, string lN, int id) : firstName(fN), lastName(lN), idNumber(id) { printPerson(); };
};
class student : public person
{
public:
    student(string fN, string lN, int id, vector<int> scores) : person(fN, lN, id)
    {
        cout << "Grade: " << calculate(scores);
    };
    char calculate(vector<int> scores);
};

int main()
{
    vector<int> scores;
    string firstName, lastName;
    int idNumber, testScores, score;
    cin >> firstName >> lastName >> idNumber;
    cin >> testScores;
    for (int i = 0; i < testScores; i++)
    {
        cin >> score;
        scores.push_back(score);
    }
    student s(firstName, lastName, idNumber, scores);
    return 0;
}
void person ::printPerson()
{
    cout << "Name: " << lastName << ", " << firstName << "\n";
    cout << "ID: " << idNumber << "\n";
};
char student ::calculate(vector<int> scores)
{
    double sum = 0;
    char grade;
    for (int i = 0; i < scores.size(); i++)
    {
        sum += scores[i];
    }
    double percent = sum / scores.size();
    if (percent >= 90 && percent <= 100)
        grade = 'O';
    else if (percent >= 80 && percent < 90)
        grade = 'E';
    else if (percent >= 70 && percent < 80)
        grade = 'A';
    else if (percent >= 55 && percent < 70)
        grade = 'P';
    else if (percent >= 40 && percent < 55)
        grade = 'D';
    else if (percent < 40)
        grade = 'T';
    return grade;
};
