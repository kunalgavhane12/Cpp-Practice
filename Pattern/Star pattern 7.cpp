/******************************************************************************
    * 
   * * 
  * * * 
 * * * * 
* * * * * 
 * * * *
  * * *
   * *
    *
*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
 int row,i,j;
    cout<<"Enter row:";
    cin>>row;
    for(i=1;i<=row;i++)
    {
        //for upper pyrimd
        for(j=row;j>=1;j--)
        (j>i)?cout<<" ": cout<<"* ";
        cout<<endl;
    }
    for(i=1;i<=row;i++)
    {
        //for reverse pyrimd 
        for(j=1;j<row;j++)
        (j<i)?cout<<" ": cout<<" *";
        cout<<endl;
    }
   return 0;
}