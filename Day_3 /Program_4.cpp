#include <iostream>

using namespace std;

int main()
{
    int i,j,r;
    cin>>r;
    for(i=0;i<r;i++)
    {
        for(j=0;j<r+r;j++)
        {
            if(j>=r-1-i && j<r)
            cout<<"*"<<" ";
            else
            cout<<" ";
        }
        cout<<endl;
    }
    
    for(i=r-1;i>=0;i--)
    {
        for(j=0;j<r+r;j++)
        {
            if(j>=r-1-i && j<r)
            cout<<"*"<<" ";
            else
            cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}
