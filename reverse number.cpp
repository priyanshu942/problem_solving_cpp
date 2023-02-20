#include<iostream>
using namespace std;

int main()
{
	int n;
	cout<<"enter the integer to be reversed \n";
	cin>>n;
	int ans=0;
	int digit=0;
	while(n%10!=0)
	{
		if(ans>INT_MAX/10||ans<INT_MIN/10)
		{
			n=0;
		}
		digit=n%10;
		ans=ans*10+digit;
		n=n/10;
	}
	cout<<"\n"<<ans;
	
}
