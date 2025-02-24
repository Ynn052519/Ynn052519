#include<iostream>
using namespace std;
int num(int x)
{
    if(x==1)
    {
        return 0;
    }
    else if(x==2)
    {
        return 1;
    }
    else
    {
        return (x-1)*(num(x-1)+num(x-2));
    }
}
int main()
{
    int n;
    cin>>n;
    cout<<num(n);
}