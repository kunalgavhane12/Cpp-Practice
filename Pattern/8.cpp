/******************************************************************************
A 
A A 
A A A 
A A A A 
A A A A A 
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
        }
        cout<<endl;
    }

    return 0;
}