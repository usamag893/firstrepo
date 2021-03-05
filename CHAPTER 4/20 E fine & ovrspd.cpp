//Q NO 20
#include <iostream>
  using namespace std;
   
 int main() 

{ 
double fine, overspeed;
cout<<"enter the over speed=";
cin>>overspeed;
if(overspeed>0&&overspeed<=5)
fine=20.00;
else if(overspeed>5&&overspeed<=10)
fine=75.00;
else if (overspeed>10&&overspeed<=15)
fine=150.00;
else if(overspeed>15)
{
	overspeed=overspeed-15;
	overspeed=overspeed*20.00;
	fine=overspeed+150;
	
}
cout<<"fine="<<fine;

return 0;       	
}
