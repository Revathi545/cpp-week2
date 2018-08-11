/* Create a class named  with the following specifications: 
 An instance variable named student to hold a student's 5 exam scores. 
  A void input() function that reads 5 integers and saves them to scores . 
 An int calculateTotalScore() function that returns the sum of the student's scores. */
#include<iostream>
using namespace std;
class stu
{
	public:
		int sub[5],i;
	void input();
	int calculateTotalScore();
	
}student;
void stu :: input()
{
	
	cout<<"enter the student marks of 5 subjects"<<endl;
	for(i=0;i<5;i++)
	{
	cout<<"enter the "<<i<<" th subject marks"<<endl;
	cin>>sub[i];
	}
}
int stu :: calculateTotalScore()
{
	int sum=0;
	for(i=0;i<5;i++)
	{
	sum=sum+sub[i];
	}
	return sum;
}
int main()
{
	int sum;
	student.input();
	sum=student.calculateTotalScore();
	cout<<"the total score of student "<<sum;
	
 } 
