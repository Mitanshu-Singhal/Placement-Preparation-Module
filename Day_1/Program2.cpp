#include<iostream>

using namespace std;
int main()
{
    int i,j,r,c;
    cin>>r>>c;
    for(i=0;i<r;i++)
    {
        cout<<"*";
        for(j=1;j<c-1;j++)
        {
            if(i==0||i==r-1)
            cout<<"*";
            else if(i>0||i<r-1)
            cout<<" ";
            //else
            //break;
        }
        cout<<"*";
        cout<<endl;
    }
    return 0;
}
