
#include <iostream>
using namespace std;
int main ()
{
int marks;
cout<<"enter marks of the subjects"<<endl;
cin>>marks;
if (marks >=70&&marks<=100)
{
	cout<<"grade A";
}
else if (marks>=60&&marks<=69)
{
	cout<<"grade is B";
}
else if (marks>=50&&marks<=59)
{
	cout<<"grade C";
}
else if (marks>=40&&marks <=49)
{
cout<<"grade D";	
}
else if(marks>=0&&marks<=40)
{
	cout<<"grade E";
}
else
{
cout<<"invalid marks";	
}
return 0;
}