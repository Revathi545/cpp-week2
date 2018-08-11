#include<iostream>
using namespace std;
int main()
{
	int unt,bill;
	
		cout<<"\nenter the units of current used:";
		cin>>unt;
	if(unt>=1000)
	{
		cout<<"\nthe charge for the each unit is 15 rupees";
		bill=unt*15;
		cout<<"\nthe total bill is:"<<bill;
	}
	else if(unt>=300)
	{
		cout<<"\nthe charge for the each unit is 3 rupees";
		bill=unt*3;
		cout<<"\nthe total bill is:"<<bill;
	}
	else if(unt>=200)                                                                
	{
		cout<<"\nthe charge for the each unit is 2 rupees";
		bill=unt*2;
		cout<<"\nthe total bill is"<<bill;
	}
	else if(unt<=100)
	{
		cout<<"\nthe charge for the each unit is 1.20 rupees";
		bill=unt*1.2;
		cout<<"\nthe total bill is"<<bill;
	}
	else
	cout<<"\nnill";
	return 0;
}
