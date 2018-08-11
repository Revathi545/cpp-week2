#include<iostream>
using namespace std;

int main()
{
	int calls,d,age;
	float bill;
	cout<<"Enter number of calls : ";
	cin>>calls;
	cout<<"enter your age:";
	cin>>age;
	if(calls<=100)
		bill=200;
	else if (calls>100 && calls<=150)
  	{
     		calls=calls-100;
     		bill=200+(0.60*calls);
	}
	else if (calls>150 && calls<=200)
	{
		calls=calls-150;
		bill=200+(0.60*50)+(0.50*calls);
 	}
	else
	{
		calls=calls-200;
		bill=200+(0.60*50)+(0.50*50)+(0.40*calls);
	}

	cout<<" \nYour bill is Rs."<<bill;
if(age>50)
{
	d=0.2*bill;
	bill=bill-d;
	cout<<"\nafter discount your bill is"<<bill;
}

	return 0;
}
