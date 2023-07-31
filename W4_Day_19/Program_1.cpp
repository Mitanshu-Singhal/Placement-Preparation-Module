class Solution {
public:
    string reverseWords(string s) {
       vector<string> vec;int a=0;
       string ans="";int i;
       for(i=0;i<s.length();i++){
           if(s[i]==' '){
               if(a!=i) {vec.push_back(s.substr(a,i-a));a=i+1;}
               else a++;
           }
       }
       if(a!=i) vec.push_back(s.substr(a,i-a));
       reverse(vec.begin(),vec.end());
       for(auto x:vec)
       ans+=x+' ';

       ans.pop_back();
       return ans;
    }
};