#include<iostream>
using namespace std;

int main()
{
    int n=5,i=1,f,c;

    

    while(i<=n)
    {   cout<<endl<<"enter temperature in celius :"<<endl;
        cin>>c;
        f= 1.8 * c +32;
        cout<<"temperature in farenhiet is: "<<endl <<f;
        i++;
    }
}