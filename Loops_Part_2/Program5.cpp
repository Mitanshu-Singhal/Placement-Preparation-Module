#include <iostream>

using namespace std;
int main()
{
    int i,j,r,k=1;
    cin>>r;
    for(i=0;i<r;i++)
    {
        for(j=0;j<r;j++)
        {
            if(j<i+1)
            {
                cout<<k<<" ";
                if(k==0)
                k++;
                else if(k==1)
                k--;
            }
            else if((i+1)%2==0)
                {
                    if(k==0)
                    k++;
                    else if(k==1)
                    k--;
                }
                
            /*else
                {
                    if(k==0)
                    k++;
                    else if(k==1)
                    k--;
                } ye wala bhi likh skte but i guess isse TC jyada hogi*/
        }
        cout<<endl;
    }
    return 0;
}
