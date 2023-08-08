/******************************************************************************
    A
   A*B
  A*B*C
 A*B*C*D
A*B*C*D*E
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
        for(k=0;k<(2*i+1);k++)
        {
            if(k%2==0)
            {
                cout<<ch;
                cnt++;
            }
            else
            cout<<"*";
            ch='A'+cnt;
        }
        ch='A';
        cnt=0;
        cout<<endl;
    }

    return 0;
}
