/******************************************************************************
A 
B C 
D E F 
G H I J 
K L M N O
******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
    int row,i,j;
    char ch='A';
    cout<<"Enter row:";
    cin>>row;
    for(i=1;i<=row;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout<<ch<<" ";
            if(ch<'Z')
            ch++;
            else
            ch='A';
        }
        cout<<endl;
    }

    return 0;
}