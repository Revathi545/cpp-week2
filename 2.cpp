#include <iostream>
#include <cstdlib>
using namespace std;

int enough (int goal)
{
int n=1, sum = 1;
while (sum < goal)
sum += ++n;
return n;
}

int main(){
 int n2,n;
 cout<<"enter the goal \n";
 cin>>n2;
 cout<<enough(n2)<<endl;


 system("pause");
 return EXIT_SUCCESS;
} 
