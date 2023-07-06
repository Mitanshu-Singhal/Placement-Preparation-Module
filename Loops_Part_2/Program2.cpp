#include <iostream>

using namespace std;

int main()
{
    int i,j,r;
    cin>>r;
    for(i=0;i<r;i++)
    {
        for(j=0;j<r*2;j++)
        {
            if(j<i+1 || j>(r*2)-2-i)
            {
                cout<<"*";
            }
            else if(j>i && j<(r*2)-i-1)
            {
                cout<<" ";
            }

        }
        cout<<endl;
    }
    for(i=r-1;i>=0;i--)
    {
        for(j=0;j<r*2;j++)
        {
            if(j<i+1 || j>(r*2)-2-i)
            {
                cout<<"*";
            }
            else if(j>i && j<(r*2)-i-1)
            {
                cout<<" ";
            }

        }
        cout<<endl;
    }
    return 0;
}
