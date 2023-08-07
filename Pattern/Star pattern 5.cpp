/******************************************************************************
    *    
   * *   
  *   *  
 *     * 
*********
*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
    int row,i,j;
    cout<<"Enter row:";
    cin>>row;
    int x=row;
    int y=row;
    for(i=1;i<=row;i++)
    {
        for(j=1;j<row*2;j++)
        {   
            if(j==x|| j==y||i==row)
            {
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }
            
        }
        x--;
        y++;
        cout<<endl;
    }

    return 0;
}
