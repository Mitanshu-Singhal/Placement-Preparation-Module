#include<iostream>

using namespace std;
int main()
{
    int i,j,r;
    cin>>r;
    for(i=0;i<r;i++)
    {
        for(j=0;j<r;j++)
        { 
            if(j<i+1)
            cout<<i+1<<" ";
        }
        cout<<endl;
    }
    return 0;
}
