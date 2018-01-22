#include <iostream>
//#include<string.h>//
using namespace std;

int main()
{ char c[20]="laptop is good";
  int i,count=0,g=0;
 // q=strlen(c);//
  for(i=0;c[i]!=0;i++)
 // count=q;//
 if(c[i]>='a'&& c[i]<='z')
 count=++g;
  cout<<count;
	
	return 0;
} 
