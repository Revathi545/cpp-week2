#include<iostream>
#include<string.h>
using namespace std;
class emp
{
	public:
	char name[10];
	int age;
	char address[15];
	int salary;
}e[2];
int main()
{
	char temp[15],temp1[10];
	int atemp,stemp;
    e[0].name=("madhu"	);
    e[0].age=20;
    e[0].address="pune";
    e[0].salary=50000;
    e[1].name="teja"	;;
    e[1].age=18;
    e[1].address="vizag";
    e[1].salary=45000;
    

	 for(int i=0;i<=10;i++)
	 {
	 
      for(int j=i+1;j<=10;j++){
      	
         if(strcmp(e[i].address,e[j].address)>0){
            strcpy(temp,e[i].address);
            strcpy(e[i].address,e[j].address);
            strcpy(e[j].address,temp);
            strcpy(temp1,e[i].name);
            strcpy(e[i].name,e[j].name);
            strcpy(e[j].name,temp1);
			strcpy(atemp,e[i].age);
            strcpy(e[i].age,e[j].age);
            strcpy(e[j].age,atemp);
			strcpy(stemp,e[i].salary);
            strcpy(e[i].salary,e[j].salary);
            strcpy(e[j].salary,stemp);            
         }
     }
 }
 for(int i=0;i<=10;i++)
 {
 	puts(e[i].name);
 	puts(e[i].age);
 	puts(e[i].address);
 	puts(e[i].salary);
 }
     
}
