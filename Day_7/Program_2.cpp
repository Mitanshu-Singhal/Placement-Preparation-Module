int maxLen(vector<int>&A, int n)
    {   
        // Your code here
        unordered_map<int,int>mp;
        int j=0,sum=0,ans=INT_MIN;
        while(j<n){
            sum+=A[j];
            if(sum==0){
                ans=j+1;
            } 
            if(mp.find(sum)!=mp.end()){
                ans=max(ans,j-mp[sum]);
            } 
            if(mp.find(sum)==mp.end())
                   mp[sum]=j;
            j++;
            // cout<<sum<<endl;
        }
        if(ans==INT_MIN){
            return 0;
        } 
        return ans;
    }