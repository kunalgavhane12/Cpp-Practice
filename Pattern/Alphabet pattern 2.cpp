/******************************************************************************
    A
   B*B
  C*C*C
 D*D*D*D
E*E*E*E*E
*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int row,i,j,k;
    char ch='A';
    cout<<"Enter row:";
    cin>>row;
    for(i=1;i<=row;i++)
    {
        for(j=row-1;j>=i;j--)
        cout<<" ";
        for(j=1;j<=i;j++)
        {
            if(j==i)
            {
                cout<<ch;
                        }
            else
            {
                cout<<ch<<"*";
                
            }
        }
        ch++;
        cout<<endl;
    }

    return 0;
}
