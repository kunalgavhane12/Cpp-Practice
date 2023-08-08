/******************************************************************************
    1
   123
  12345
 1234567
123456789
*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int row,i,j,k=1;
    char ch='A';
    cout<<"Enter row:";
    cin>>row;
    for(i=1;i<=row;i++)
    {
        for(j=row-1;j>=i;j--)
        cout<<" ";
        for(j=1;j<=k;j++)
        {
           cout<<j; 
        }
        k+=2;
        cout<<endl;
    }

    return 0;
}
