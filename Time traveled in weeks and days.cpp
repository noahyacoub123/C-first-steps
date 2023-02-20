#include<iostream>
using namespace std;

int main()
{
int days;
int weeks;
int leftovr;

cout<<"How many days have you traveled?"<<endl;
cin>>days;
weeks = days/7;
leftovr = days%7;

cout<<"You have travelled for "<<weeks<<" week(s)"<<" and "<<leftovr<<" days"<<endl;

return 0;
}