/******************************************************************************
A 
A B 
A B C 
A B C D 
A B C D E 
*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
    char row;
    int i,j;
    cout<<"Enter Upto Character:";
    cin>>row;
    for(i='A';i<=row;i++)
    {
        for(j='A';j<=i;j++)
        cout<<(char)j<<" ";
        cout<<endl;
    }

    return 0;
}