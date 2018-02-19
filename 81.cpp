#include<iostream>
using namespace std;
int main()
{
   int kabali,opponent,i,dif;
  for(i=0;i<=2;i++)
   { cout<<"enter two war battele num:";
       cin>>kabali>>opponent;
       dif=kabali-opponent;
   if(dif<0)
   {
   dif=-dif;
   }
   else
   {
       dif=dif;
   }
   cout<<dif<<'\n';
   }
   return 0;
}
