class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n = nums.size(), start = 1, end = n - 1;
        while(start<=end)
        {
            int mid = start+(end-start)/2, count = 0;
            for(int i=0; i<n; i++)
                if(nums[i]<=mid)
                    count++;
            if(count<=mid)
                start = mid+1;
            else
                end = mid-1;
        }
        return start;
    }
};
