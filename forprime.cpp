#include<iostream>
using namespace std;

int main()
{   
    int n;
    cout<<"enter value of n"<<endl;
    cin>>n;
    bool isprime = 1;
    for(int i=2;i<n;i++)
    {
        if(i%n == 0)
        {
            isprime = 0;
            break;
        }
    }

    if(isprime == 0 )
    {
        cout<<n<<" is not a prime number";
    }
    else{
        cout<<n<<" is a prime number";
    }
    return 0;
}