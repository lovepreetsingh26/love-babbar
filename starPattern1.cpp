#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int row=1;

    while (row<=n)
    {
        /* code */
        int col =1;
        while (col<=row)
        {
            cout<<"x";
            col++;
        }
     
        cout<<endl;
        row++;
    }
    

    return 0;
}
