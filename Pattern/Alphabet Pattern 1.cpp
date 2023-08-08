/******************************************************************************
A 
B C 
D E F 
G H I J 
K L M N O
*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int row,i,j;
    char ch='A';
    cout<<"Enter row:";
    cin>>row;
    for(i=0;i<row;i++)
    {
        for(j=0;j<=i;j++)
        {
            if(ch<'Z')
            cout<<ch<<" ";
            else
            cout<<" ";
            ch++;
        }
        
        cout<<endl;
    }

    return 0;
}
