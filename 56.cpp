#include<iostream>
using namespace std;
#include<string.h>
int main()
{
    char ch[100];cin>>ch;
    int k,i,temp=0,temp1=0;
    k=strlen(ch);
    for(i=0;i<k;i++)
    {
    	if(ch[i]>='a'&&ch[i]<='z')
    	temp++;
    	else if(ch[i]>='0'||ch[i]<='9')
    	temp1++;
    }
    if(temp!=0&&temp1!=0)
    cout<<"yes";
    else
    cout<<"no";
    return 0;
}
