#include <iostream>
using namespace std;
int main() {
    int a;
    int b;
    cout<<"before"<<a<<'\n'<<b;
    cin>>a>>b;
    a = a ^ b;
    b = a^ b;
    a = a ^ b;
    cout<<"after"<<a<<'\n'<<b;

    return 0;
}
