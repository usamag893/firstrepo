//Q NO 7
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
int a,b,c,X,Y;
cout<<"enter three values: \n";
cin>>a>>b>>c;
if(pow(b,2)-4*a*c==0)
cout<<"the equation has a single root";
else if(pow(b,2)-4*a*c>0)
cout<<"the equation has 2 real roots";
else if(pow(b,2)-4*a*c<0)
cout<<"the equation has 2 complex root";
if(pow(b,2)-4*a*c>=0)
{
	X=(-b+sqrt(pow(b,2)-4*a*c)/2*a);
	}
	else
	Y=(-b-sqrt(pow(b,2)-4*a*c)/2*a);
	cout<<"X="<<X;
	cout<<"Y="<<Y;
}
