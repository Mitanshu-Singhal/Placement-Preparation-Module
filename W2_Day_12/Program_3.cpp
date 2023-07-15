class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count=0;
        int prevCount=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
                count++;
            }else{
                if(prevCount<count){
                    prevCount=count;
                    count=0;
                }else{
                    count=0;
                }
            }
        }
        if(prevCount<count){
            return count;
        }else{
            return prevCount;
        }
    }
};