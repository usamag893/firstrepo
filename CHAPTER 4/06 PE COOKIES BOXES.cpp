//Q NO 6
#include<iostream>
using namespace std;
const int COOKIES_PER_BOX=24;
const int BOXES_PER_CONTAINER=75;
int main()
{
	int cookies,boxes,container;
	cout<<"enter the number of cookies:"<<endl;
	cin>>cookies;
	{
	if(cookies>=24)
	boxes=cookies/COOKIES_PER_BOX;	
	else
	cout<<"total cookies are less than requirement";
	cout<<"boxes="<<boxes<<endl;
	cookies=cookies-(boxes*24);
	cout<<"leftover cookies="<<cookies<<endl;
	}
	{
	if(boxes>=75)
	container=boxes/BOXES_PER_CONTAINER;
	else
	cout<<"total boxes are less than requirements";
	cout<<"container="<<container<<endl;
	boxes=boxes-(container*75);
	cout<<"leftover boxes="<<boxes;
	}
}
	

