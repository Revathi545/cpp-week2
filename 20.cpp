#include<iostream>

using namespace std;

 int main()
  {
  int i,a[5],no,pos;
   int I;
   
 
  cout<<"Enter data in Array: ";
  for(i=0;i<5;i++)
  {
  cin>>a[i];
  }
  cout<<"\n\nStored Data in Array: ";
  for(i=0;i<5;i++)
  {
  cout<<a[i];
  }
   cout<<"\n\nEnter position to insert number: ";
  cin>>pos;
  if(pos>5)
  {
  cout<<"\n\nThis is out of range";
  }
   do
    {
        puts("Enter -1 to quit");
        printf("Enter your choice: ");
        scanf("%d",&I);
        switch(I)
        {
            case 1:
            cout<<"\n\nEnter new number: ";
  			cin>>no;
  			--pos;
  			for(i=5;i>=pos;i--)
  			{
  				a[i+1]=a[i];
  			}
  			a[pos]=no;
  			cout<<"\n\nNew data in Array: ";
  			for(i=0;i<6;i++)
  			{
  					cout<<a[i];
  			}
            break;
            case 2:
             --pos;
   				for(i=pos;i<=4;i++)
  				{
   					 a[i]=a[i+1];
   				}
   				cout<<"\n\nNew Data in Array: ";
   				for(i=0;i<4;i++)
  				{
   					 cout<<a[i];
 				}
            break;
            default:
            printf("default\n");
        }
    }while(I != -1);
   return 0;
}
