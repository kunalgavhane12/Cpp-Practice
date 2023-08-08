/******************************************************************************
    A
   B*B
  C***C
 D*****D
E*******E
*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int row,i,j,k;
    char ch='A';
    int cnt=0;
    cout<<"Enter row:";
    cin>>row;
    for(i=0;i<row;i++)
    {
        for(j=row-1;j>i;j--)
        cout<<" ";
        for(k=0;k<=(2*i);k++)
        {
            if(k==0 || k==(2*i))
            {
                cout<<ch;
            }
            else
            cout<<"*";
        }
        ch++;
        cout<<endl;
    }

    return 0;
}
