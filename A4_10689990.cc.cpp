#include <iostream>
using namespace std;

int hcf(int x, int y)
{
	if(y==0) return x;
	else
	{
		hcf(y, x%y);
	}
}

int main()
{
	int a, b, c;
	cout<<" Greatest Common Divisor Determiner Of Two Numbers"<<endl;
	cout<<" Input Your First Number "; cin>>a;
	cout<<" Input Your Second Number "; cin>>b;
	
	c=hcf(a,b);
	if(c<0)
	{
		c*=-1;
	}
	cout<<"Your Greatest Common Factor is "<<c; 
return 0;
}
