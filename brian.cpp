//program to find bonus of workers//
#include <iostream>
using namespace std;
int main()
{
	float salary,bonus;
	int years;
	
	cout<<"enter salary: ";
	cin>>salary;
	cout<<"enter years: ";
	cin>>years;
	
	if (years >10)
		
	{
		bonus=salary*0.1;
		cout<<bonus;
	}
		if(years>=6&&years<=10)
		{
			bonus=salary*0.08;
			cout<<bonus;
		}
		
     if(years<6)
	 {
		bonus=salary*0.05;	 
			cout<<bonus;
	 }
}