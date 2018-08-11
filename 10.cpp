#include<iostream>
using namespace std;
int main()
{
int a,b,c,d,f;
cout<<"Enter the distance (in km):\n ";
cin>>a;
cout<<"converted distance"<<endl;
b = a * 1000;
c = b * 3.28;
d = c * 12; 
f = d * 30;
cout<<"\nDistance in meters " <<b<<"m";
 cout<<"\nDistance in feets "<<c<<"feet";
cout<<"\nDistance in inches "<<d<<"inches";
cout<<"\nDistance in centimeters"<<f<<"cm";
cout<<"\n\npress any key to close.";
return 0;
}
