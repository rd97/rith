#include <iostream>
using namespace std;
int main() {
    int a = 65;
    int b = 120;
    cout<<"before"<<a<<'\n'<<b;

    a = a ^ b;
    b = a^ b;
    a = a ^ b;
    cout<<"after"<<a<<'\n'<<b;

    return 0;
}
