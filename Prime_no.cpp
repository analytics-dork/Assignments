#include <iostream>
using namespace std;
int main()
{
	int input;
	
	cout<<"\t\t\t\t\t PRIME NUMBER DETERMINER \n"<<endl;
	cout<<"Input any number of your choice ";
	cin>>input;
	
	if(input==1)
	{
	cout<<"\n Your number is not PRIME \n"<<endl;
	}
	else if(input==2 || input==3 || input==5) 
	{
	cout<<"\n Your number is PRIME \n"<<endl;
	}
	else if(((input-1)%6==0 || (input+1)%6==0) && input%5==0)
	{
		cout<<"\n Your number is not PRIME \n"<<endl;
	}
	else if((input-1)%6==0 || (input+1)%6==0 )
	{
		cout<<"\n Your number is PRIME \n"<<endl;
	}
	else
	{
		cout<<"\n Your number is not PRIME \n"<<endl;
	}
	
	system("pause");
	return 0;
}
