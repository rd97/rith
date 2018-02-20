#include <iostream>
using namespace std;
#include<string.h>
int main()
{
  char s[100];
  int l,t;
  cout<<"name:";
  cin>>s;
  l=strlen(s);
  t=l/2;
  if(l%2==0)
  {       s[t-1]='*';
          s[t]='*';
          cout<<s;   
      
  }else
  {
      s[t]='*';
      cout<<s;
      }
      return 0;
}
