#include <iostream>
#include<string.h>
using namespace std;

int main() {
	char q[20]="helloworld";
	char s[40]="jellybean";
	int a,b;
	a=strlen(q);
	b=strlen(s);
	if((a>b) || (a=b))
	{
		cout<<q;
	}
	else if(a<b)
	{
		cout<<s;
	}
	return 0;
} 
