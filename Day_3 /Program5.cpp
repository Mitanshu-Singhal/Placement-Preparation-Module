//abhi galat hai par ye program bs >=9 ke liye h
#include <iostream>
#include<math.h>
using namespace std;

int main()
{
    int i,j,r;
    cin>>r;
    for(i=1;i<=(int)sqrt(r);i++)
    {
        for(j=1;j<=r;j++)
        {
            if(((i+j)%4==0) || (i==2 && j%4==0))
            cout<<"*";
            else
            cout<<" ";
        }
        cout<<endl; 
    }
    return 0;
}
