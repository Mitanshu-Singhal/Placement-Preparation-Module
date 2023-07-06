#include <iostream>

using namespace std;
int main()
{
    int i,j,r,k;
    cin>>r;
    for(i=0;i<r;i++)
    {
        k=1;
        for(j=0;j<r+r;j++)
        {
            if(j>=r-1-i && j<r)
            {
                cout<<k<<" ";
                k++;
            }
            else
            cout<<" ";
        }   
        cout<<endl;
    }
    return 0;
}
