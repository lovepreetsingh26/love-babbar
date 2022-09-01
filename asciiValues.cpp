#include<iostream>
using namespace std;
 
int main()
{
    char a;
    cin>>a;
    int ascii =a;


    if(ascii>=0 && ascii<=9)
    {
        cout<<"character entered is numeric value"<<endl;
    }
     else if (ascii>=65 && ascii <=90)
     {
        cout<<"character entered is uppercase" <<endl;
     }

    else if (ascii>=97 && ascii <= 122)     
    {
        /* code */
        cout<<"character entered is lowercase" << endl;
    }
    
     
    return 0;

}