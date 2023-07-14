class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int c=1,m=1;
           sort(nums.begin(),nums.end());
        unique(nums.begin(),nums.end());
     
        int n=nums.size();
        for(int i=0;i<n-1;i++){
            if(nums[i]-nums[i+1]==-1){
                    c++;
            }
            else {
            m=max(m,c);
            c=1;
            }
        }

        if(n>0) return m;
        else return 0;
        
    }
};