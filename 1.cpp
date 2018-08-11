

#include <iostream>
#include <cstdlib>
using namespace std;



int sum_from_to (int first, int last)
{
int i, partial_sum = 0;
if (first <= last)
for (i = first; i <= last; ++i)
partial_sum += i;
else
for (i = first; i >= last; --i)
partial_sum += i;
return partial_sum;
}

int main(){
 
 int n1, n2;
 cout<<"enter the values of n1 and n2"<<endl;
 cin>>n1>>n2;
 cout<<sum_from_to(n1, n2)<<endl;
 system("pause");
 return EXIT_SUCCESS;
} 
