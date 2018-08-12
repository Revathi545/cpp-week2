#include<iostream>
using namespace std;
class Area
{private:
int a,b;
float c;
public:
void triangle()
{cout <<"area of triangle is" ;
c=0.5*a*b;
cout<<c <<endl;
}
void rectangle()
{cout<<"area of rectangle is  "<<a*b<<endl;
}
void circle()
{cout<<"area of circle is  ";
c=3.14*a*a;
cout<<c <<endl;
}
Area(int x,int y)
{cout<<"constructor called "<<endl;
a=x;
b=y;
}
Area(int x)
{cout<<"constructor called "<<endl;
a=x;
}
};
int main()
{Area obj(4,6);//1st call implicit call
Area obj1=Area(2,3);//2nd call Explicit
Area obj2=8;//if one argument can pass  argument directly
obj.triangle();
obj1.rectangle();
obj2.circle();
return 0;
}
