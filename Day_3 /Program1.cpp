#include <iostream>

using namespace std;
int main()
{
    int i,j,r,k=1;
    cin>>r;
    for(i=0;i<r;i++)
    {
        for(j=0;j<r+r;j++)
        {
            if(j>=r-i && j<(r+r)-i)
            {
                cout<<"*";
            }
            else
            cout<<" ";
        }   
        cout<<endl;
    }
    return 0;
}
