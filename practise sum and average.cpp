#include<iostream>
using namespace std;
int main()
{
	double abc[20],n,i,sum=0,avg;
	cout<<"how many numbers you want to enter";
	cin>>n;
	cout<<"enter any"<<n<<"numbers"<<endl;
	for(int i=0 ; i<n ; i++)
	{
	cin>>abc[i];
}
	cout<<"sum of all the numbers is=";
	for(int i=0;i<n;i++)
	sum=sum+abc[i];
	cout<<sum<<endl;
	avg=sum/n;
	cout<<"the avarge of all these numbers is = "<<avg;
	
	
	
	
}
