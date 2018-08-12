#include<iostream>
using namespace std;
struct airlines
{
	int seat;
	int mark;
	char firstn[10];
	char lastn[10];
}a[12];
int main()
{
	int n,count=0;
	while(n!=5)
	{
		cout<<"1.list of empty seats"<<endl<<"2.assign a seat"<<endl<<"3.delete a seat"<<endl<<"4.quit"<<endl;
     	cout<<"enter"<<endl;
     	cin>>n;
     	if(n==1)
     	{
     	for(i=0;i<12;i++)	
     	{
     		cout<<"empty seats"<<a[i].seat;
     		count++;
		 }
		 cout<<"no.of seats"<<count<<endl;
		 
		 }
		 else if(n==2)
		 {
		 	cout<<"assigning a seat"<<endl;
		 	cout<<"enter seat number";
		 	cin>>
		 }
	
}
