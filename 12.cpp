#include<iostream>
using namespace std;
int main()
{
	int i,j,k;
	for(i=1;i<=5;i++)
	{
		
		for(j=1;j<=i;j++)
		{
			cout<<j;
			for(k=5;k>=1;k--)
			cout<<" ";
		}
		
		cout<<endl;
	}
	
	for(i=5;i>=1;i--)
	{
		for(k=5;k<=1;k--)
			cout<<k;
		for(j=1;j<=i;j++)
		{
			cout<<j;
		}
		cout<<endl;
	}
	for(i=5;i>=1;i--)
	{
		for(k=5;k<=1;k--)
			cout<<k;
		for(j=1;j<=i;j++)
		{
			cout<<j;
		}
		cout<<endl;
	}
	
return 0;
}
