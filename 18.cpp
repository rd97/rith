#include <iostream>
using namespace std; 
int main()
{
    int n0, temp, digit, digit2,digit3 ;
 cout<<"entered the armstrong ranges";
    n0= 1;
    while (n0<= 900)
    {
        digit= n0 - ((n0 / 10) * 10);
        digit2 = (n0 / 10) - ((n0/ 100) * 10);
        digit3 = (n0 / 100) - ((n0 / 1000) * 10);
        temp = (digit * digit * digit) + (digit2 * digit2 * digit2) + (digit3 * digit3 * digit3);
    if(temp==n0)
    {
    	cout<<'\n'<<temp;
    }n0++;
    }
    return 0;
} 
