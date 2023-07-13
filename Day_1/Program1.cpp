#include<iostream>

using namespace std;
int main()
{
    int i,j,r,c;
    cin>>r>>c;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
