#include<iostream>
using namespace std;
int main()
{
int no,sum=0,rem,r;
cin>>no;
r=no;
while(no>0)
{ 
rem=no%10;
sum=sum+(rem*rem*rem);
no=no/10;
}
if(r==sum)
printf("armstrong number");
else
printf("not armstrong number");
return 0;
}
