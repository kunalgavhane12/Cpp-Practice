/******************************************************************************
5 5 5 5 5 
* * * * 
3 3 3 
* * 
1 
*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{   
    int row,i,j;
    cout<<"Enter row:";
    cin>>row;
    for(i=row;i>0;i--)
    {
        for(j=0;j<i;j++)
        if(i%2==0)
        cout<<"* ";
        else
        cout<<i<<" ";
        cout<<endl;
    }

    return 0;
}