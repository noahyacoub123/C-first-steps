#include<iostream>
#include<cmath>
using namespace std;


int main()
{

double radius, area;

cout<<"Please enter the radius of your circle: "<<endl;
cin>>radius;
area = M_PI * radius * radius;

cout<<"The area of your circle is "<<area<<" units squared!"<<endl;

return 0;
}