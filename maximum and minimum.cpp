#include<iostream>
using namespace std;
int main()
{
	int abc[10], i ,n,max ;
	cout<<"enter some numbers =";
	cin>>n;
	cout<<endl;
for(int i=0; i<n;i++)
{

cout<<"enter "<<i+1<<"number";
cin>>abc[i];
}
max=abc[0];
for(int i=0; i<n;i++)
{
if (max<abc[i])
	max=abc[i];
}
cout<< "the maximum number is="<<max;




}
