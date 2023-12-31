class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n= nums.size();
        sort(nums.begin(),nums.end());
        if(n<3 || nums[0]>0)return {};
        
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++)mp[nums[i]]=i;
        
        vector<vector<int>>ans;
        
        for(int i=0;i<n-2;i++){
            if(i!=0 && nums[i]==nums[i-1])continue;
            if(nums[i]>0)break;
            
            for(int j=i+1;j<n-1;j++){
                
                if(j!=i+1 && nums[j]==nums[j-1])continue;
                int twosum = -(nums[i]+nums[j]);
                
                if(mp.find(twosum)!=mp.end())
                    if(mp[twosum]>j)
                        ans.push_back({nums[i],nums[j],twosum});
            }
        }
        return ans;
    }
};
