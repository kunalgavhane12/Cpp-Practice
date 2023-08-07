/******************************************************************************
A
BB
CCC
DDDD
EEEEE
******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
    char row,i,j;
    cout<<"Enter character:";
    cin>>row;
    for(i='A';i<=row;i++)
    {
        for(j='A';j<=i;j++)
        cout<<i;
        cout<<endl;
    }

    return 0;
}