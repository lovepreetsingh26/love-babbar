#include <iostream>
#include <stdio.h>
using namespace std;

int sumofnaturalnumber(int n)
    {	
    	int s;
    	 s=n*(n+1)/2;
    	 return s;
    	
	}
   
int main()
{
    int n , s;
    cout<<"enter the value of n";
    cin>>n;
    
    s=sumofnaturalnumber(n);
    cout<<"the sum of N natural numbers are:"<<s;

    return 0;

}


