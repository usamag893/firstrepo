//Q NO 5
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
int a,b,c;
cout<<"enter the length of 3 sides";
cin>>a>>b>>c;
{
if(pow(c,2)==pow(a,2)+pow(b,2))
cout<<"the triangle is right triangle";
else if(pow(a,2)==pow(c,2)-pow(b,2))
cout<<"the triangle is right triangle";
else if(pow(b,2)==pow(c,2)-pow(a,2))
cout<<"the triangle is right triangle";
else
cout<<"triangle is not right";
}
}
