class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> last_index (127, -1);
        int left = -1;
        int maxlen = 0;

        for(int i=0; i<s.size(); i++){
            if(last_index[s[i]] != -1){
                if(last_index[s[i]] < left){
                    last_index[s[i]] = -1;
                }else{
                    left = last_index[s[i]];
                }
            }
            last_index[s[i]] = i;
            maxlen = max(maxlen, i - left);
        }

        return maxlen;
    }
};