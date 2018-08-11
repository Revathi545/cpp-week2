#include <iostream>
#include <cstdlib>
using namespace std;

int g_c_d (int num1, int num2)
{
int numerator,denominator,remainder,gcd;
	 if (num1 > num2)
    {
        numerator = num1;
        denominator = num2;
    }
    else
    {
        numerator = num2;
        denominator = num1;
    }
    remainder = numerator % denominator;
    while (remainder != 0)
    {
        numerator   = denominator;
        denominator = remainder;
        remainder   = numerator % denominator;
    }
    gcd = denominator; 	
 return gcd;
 
}

int main()
{
 int n1, n2,b;
 cout<<"enter the values of n1 and n2"<<endl;
 cin>>n1>>n2;
 b=g_c_d(n1, n2);
 cout<<b;
}
