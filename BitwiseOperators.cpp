#include<iostream>
using namespace std;

int main()
{
    //using bitwise operators

    int a=4;
    int b=6;

    cout<<(a&b)<<endl;
    cout<<(a|b)<<endl;
    cout<<~a<<endl;
    cout<<(a^b)<<endl;
    cout<<(-17>>2); //right shift padding

    return 0;
}