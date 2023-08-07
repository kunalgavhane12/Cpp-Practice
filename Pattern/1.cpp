/******************************************************************************
1
0 1
1 0 1
0 1 0 1
1 0 1 0 1
*******************************************************************************/
#include <iostream>
using namespace std;

int main()
{
    int row,i,j;
    cout<<"Enter row: ";
    cin>>row;
    for(i=0;i<=row;i++)
    {
        for(j=i;j>0;j--)
        cout<<j%2<<" ";
        cout<<endl;
    }
    return 0;
}
