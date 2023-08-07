/******************************************************************************
    1
   121
  12321
 1234321
123454321
*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
    int row,i,j,k;
    cout<<"Enter row:";
    cin>>row;
    for(i=1;i<=row;i++)
    {
        for(j=row-1;j>=i;j--)
        cout<<" ";
        for(k=1;k<=i;k++)
        cout<<k;
        for(k=i-1;k>=1;k--)
        cout<<k;
        cout<<endl;
    }

    return 0;
}