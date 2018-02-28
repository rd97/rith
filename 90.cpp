#include<iostream>
using namespace std;
int main()
{
	char s1[100];
	int i;
	gets(s1);
	for(i=0;s1[i]!='\0';i++)
	{
		if(s1[i]>='0' && s1[i]<='9')
		cout<<s1[i];
	}return 0;
	
}
