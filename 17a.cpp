#include<iostream>
using namespace std;
int add(int x,int b=7)
{
    return x+b;
}
int main()
{
    cout<<add(4)<<endl;
    cout<<add(6,7);
    return 0;
}