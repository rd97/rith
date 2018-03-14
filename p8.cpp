#include <iostream>
using namespace std;
#include<string.h>
int main() 
{
	char a[100];
    int n,i;
    gets(a);
    a[0]=a[0]-32;
    for(i=0;i<10;i++)
    {
      if(a[i]==' ')
      {
          a[i+1]=a[i+1]-32;
      }
    }
    cout<<a;
	
	return 0;
}
