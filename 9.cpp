#include<iostream>
using namespace std;
struct first
{
	int a;
}m;
struct second
{
	int b;
}n;
int main()
{int x,y,temp;
	cout<<"enter first"<<endl;
	cin>>m.a;
	x=m.a;
	cout<<"enter second"<<endl;
	cin>>n.b;
	y=n.b;
	temp=x;
	x=y;
	y=temp;
	m.a=x;
	n.b=y;
	cout<<"first"<<m.a<<"second"<<n.b;
	
}
