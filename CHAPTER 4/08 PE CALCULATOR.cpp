//Q NO 8
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int a,b;
	char op;
	cout<<"enter integer operator";
	cin>>a>>b;
	cout<<endl;
	cout<<"enter operation to be performed";
	cin>>op;
	cout<<endl;
	switch(op)
	{
	case'+':
	cout<<"a"<<"+"<<"b"<<"="<<a+b;
	break;
	case'-':
	cout<<"a"<<"-"<<"b"<<"="<<a-b;
	break;
	case'*':
	cout<<"a"<<"*"<<"b"<<"="<<a*b;
	break;
	case'/':
	if(b>0)
	cout<<"a"<<"/"<<"b"<<"="<<a/b;
	else
	cout<<"you cannot divide number with zero";
	break;
	case'%':
	if(b>0)
	cout<<"a"<<"%"<<"b"<<"="<<a%b;
	else
	cout<<"you cannot take modulos of zero";
	break;
	default:
	cout<<"invalid input";
	}
}
