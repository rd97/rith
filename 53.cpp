#include<iostream>
using namespace std;
int main()
{
   int array[5];
   int i,sum=0;
   int *ptr;
 cout<<"\nEnter array elements";
   for(i=0;i<=5;i++)
   {
      cin>>array[i];
   }
      ptr = array;
   for(i=0;i<=5;i++)
   {
    sum=sum+*ptr;
    ptr++;
   } 
   cout<<'\t'<<sum;
   return 0;
}
