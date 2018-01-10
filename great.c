#include<stdio.h>
int main()
{
int q=60,w=70,e=45;
if(q>w && q>e)
{
printf("bigger%d",q);
}
else if(w>q && w>e)
{
printf("better%d",w);
}
else if(e>q && e>w)
{
printf("small%d",e);
}
 return 0;
}

