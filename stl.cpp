#include<iostream>
using namespace std;
int sum(int a,int b)
{
    return a+b;
}
int main (){
    int a,b;
    cout<<" enter two numbers ";
    cin>>a>>b;

    int add = sum(a,b);
    cout<<" sum of two numbers ";
    cout<<add;
    return 0;
}