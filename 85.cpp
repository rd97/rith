#include <iostream>
using namespace std;
#include<string.h>
int main() 
{
	char s[90];
	int i,a;
	cout<<"enter:";
	cin>>s;
	a=strlen(s);
	for(i=0;i<a;i++)
	{
	    if(i%2==0)
	    {
	        cout<<s[i];
	    }
	}
	cout<<" ";
	for(i=0;i<a;i++)
	{
	    if(i%2!=0)
	    {
	        cout<<s[i];
	    }
	}
	return 0;
}
