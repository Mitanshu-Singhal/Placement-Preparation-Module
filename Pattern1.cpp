#include<iostream>
using namespace std;
int main()
{
    int r,i=0,c,j;
    cin>>r;
    c=r;
    while(i<r)
    {
        j=0;
        while(j<c)
        {
            cout<<"*"<<" ";
            j+=1;
        }
        i+=1;
        cout<<endl;
    }
    return 0;
}