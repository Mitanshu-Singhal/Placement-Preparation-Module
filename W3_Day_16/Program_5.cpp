class Solution {
public:
    vector<int> NG(vector<int>& nums2)
    {
        stack<int>st;
        vector<int>sol;
        for(int i=nums2.size()-1;i>=0;i--)
        {
            if(st.empty())sol.push_back(-1);
            else if(st.empty()==false && st.top()>nums2[i])
            sol.push_back(st.top());
            else if(st.empty()==false && st.top()<=nums2[i])
            {
                while(st.empty()==false && st.top()<=nums2[i])
                {
                    st.pop();
                }
                if(st.empty())
                sol.push_back(-1);
                else
                sol.push_back(st.top());
            }
            st.push(nums2[i]);
        }
        reverse(sol.begin(),sol.end());
        return sol;
    }
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int>v=NG(nums2);
        unordered_map<int,int>mp;
        // for(int i=0;i<nums2.size();i++)
        // {
        //     for(int j=0;j<nums1.size();j++)
        //     {
        //         if(nums1[i]==nums2[j])
        //         {res.push_back(v[j]);break;}
        //     }
        // }
        // return res;
        for(int i=0;i<nums2.size();i++){
            mp[nums2[i]]=v[i];
        }
        for(int i=0;i<nums1.size();i++){
            nums1[i]=mp[nums1[i]];
        }
        return nums1;
    }
};