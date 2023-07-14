int Solution::solve(vector<int> &A, int B) {
	int ans=0, count=0;
	unordered_map<int,int>mp;
	for(int i=0;i<A.size();i++){
		ans^=A[i];
		if(ans==B) count++;
		if(mp.find(ans^B)!=mp.end()){
			count+=mp[ans^B];
		}
		mp[ans]++;
	}
	return count;
}