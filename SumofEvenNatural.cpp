#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    //check whether it is an even or not
    //if it is even then add it in sum;
    int sum=0,i=1;

    while (i<=n)

    {
        if(i%2==0)
        {
            sum=sum + i;

        }
        /* code */
        i++;
    }
    cout<<"sum of even natural numbers are: "<<sum;
    
}