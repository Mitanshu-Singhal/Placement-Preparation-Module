#include<iostream>

using namespace std;
int main()
{
    int i,j,r,c;
    cin>>r;
    c=r;
    for(i=0;i<r;i++)
    {
        for(j=c;j>0;j--)
        {
            cout<<"*";
            
        }
        c--;
        cout<<endl;
    }
    return 0;
}
