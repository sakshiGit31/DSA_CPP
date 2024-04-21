#include<iostream>
using namespace std;

// int main(){
//     int a=10,b=20,sum;
//     sum=a+b;
//     cout<<" sum of two number "<< sum;
//     return 0;
// }

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