#include<iostream>
using namespace std;
int main()
{
	int n,num=0;
	cin>>n;
	while(n!=0)
	{ 
		num=(n%10);
		n=n/10;     
	}
	while(num!=0)
	{
		switch(num%10)
		{
		case 1:
		cout<<("one");break;
		case 2:
		cout<<("two");break;
		case 3:
		cout<<"three";break;
		} 
		num =0;
	}return 0;
}
