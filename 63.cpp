#include<iostream>
using namespace std;
int main()
{
	char a[100];
	int i,s=1;
	cout<<"enter string\n";
	gets(a);
	for(i=0 ;a[i]!='\0';i++)
	{
		if(a[i]==' ')
		s++;
	}
	cout<<"result"<<s;
	return 0;
}
