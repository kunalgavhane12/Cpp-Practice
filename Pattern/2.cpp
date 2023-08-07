/******************************************************************************
 5 5 5 5 5
 4 4 4 4
 3 3 3
 2 2
 1
*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
    int row,i,j;
    cout<<"Enter row:";
    cin>>row;
    for(i=row;i>0;i--,cout<<endl)
    {
      for(j=i;j>0;j--)
      cout<<" "<<i;
    }
    
    
    return 0;
}