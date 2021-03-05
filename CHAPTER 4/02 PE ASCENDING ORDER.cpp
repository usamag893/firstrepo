//Q NO 2
#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	cin>>a;
	cin>>b;
	cin>>c;
	if(a<b&&b<c&&a<c)
	cout<<a<<b<<c<<endl;
	else if(c<b&&c<a&&b<a)
	cout<<c<<b<<a<<endl;
	else if(b<a&&a<c&&b<c)
	cout<<b<<a<<c<<endl;
	else if(c<a&&b<c&&b<a)
	cout<<b<<c<<a<<endl;
	else if(a<b&&a<c&&c<b)
	cout<<a<<c<<b<<endl;
	else if(a<b&&c<b&&c<a)
	cout<<c<<a<<b<<endl;
}
