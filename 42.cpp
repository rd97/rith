#include <iostream>
#include<string.h>
using namespace std;

int main() {
	char q[20]="helloworld";
	char s[40]="jellybeanfine";
	int a,b;
	a=strlen(q);
	b=strlen(s);
	if(a>=b)
	{
		cout<<q;
	}
	else 
	{
		cout<<s;
	}
	return 0;
} 
