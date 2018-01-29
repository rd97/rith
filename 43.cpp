#include<iostream>
#include<string.h>
using namespace std;
int main()
{
char a[100]="its me rd";
char s[100]="karur";
char i,j;
for(i=0;a[i]!='\0';i++)
{
	for(j=0;s[j]!='\0';j++)
	{
	a[i]=s[j];
    }/*if(w!=0)
    {
    	a[100]=s[100];
    }*/
    s[i]='\0';
	i++;

    cout<<a<<s;
}
 return 0;
    }
