#include <iostream>
using namespace std;
int main()
{
	
	int input;
	cout<<" UNIVERSITY OF GHANA GRADING SYSTEM \n"<<endl;
	cout<<" Enter your marks for the Course ";
	cin>>input;
	
	if(input>100 || input<0)
	{
		cout<<"\n Invalid Input ";
	 } 
	else if(input>=80 && input<=100)
	{
		cout<<"\n Your Grade is an A ";
	}
	else if(input>=75 && input<=79)
	{
		cout<<"\n Your Grade is a B+ ";
	}
	else if(input>=70 && input<=74)
	{
		cout<<"\n Your Grade is a B ";
	}
	else if(input>=65 && input<=69)
	{
		cout<<"\n Your Grade is a C+ ";
	}
	else if(input>=60 && input<=64)
	{
		cout<<"\n Your Grade is a C ";
	}
	else if(input>=55 && input<=59)
	{
		cout<<"\n Your Grade is a D+ ";
	}
	else if(input>=50 && input<=54)
	{
		cout<<"\n Your Grade is a D ";
	}
	else if(input>=45 && input<=49)
	{
		cout<<"\n Your Grade is an E ";
	}
	else
	{
		cout<<"\n Your Grade is an F ";
	}
	
	return 0;
}
