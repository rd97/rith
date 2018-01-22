#include<iostream>
#include<string.h>
using namespace std;

int main()
{ char c[30]="its me rd.ece.be";
int i,s=1;
for(i=0;c[i]!='\0';i++)
{
	if(c[i]=='.')
	s++;

}
 cout<<s;
 return 0;
}
