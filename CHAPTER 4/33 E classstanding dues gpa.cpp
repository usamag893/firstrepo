//Q NO 33
#include<iostream>
using namespace std;
int main()
{
char classstanding;
double gpa,dues;
cout<<"enter the value";
cin>>classstanding;
cin>>gpa;
switch(classstanding)
{
case'f':
cout<<"due 150";
break;
case's':
if(gpa>=3.75)
cout<<"75";
else
cout<<"120";
break;
case'j':
if(gpa>=3.75)
cout<<"50";
else
cout<<"100";
break;
case'n':
if(gpa>=3.75)
cout<<"25";
else
cout<<"75";
break;
}
}

