int maxMeetings(int start[], int end[], int n)
    {
        multimap<int,int> m;
        for(int i=0;i<n;i++){
            m.insert(make_pair( end[i],start[i]));
        }
        int nstart[n];
        int nend[n];
        int j=0;
        for(auto it:m){
            nstart[j]=it.second;
            nend[j]=it.first;
            j++;
         
        }
        int et=-1;
        int count=0;
        for(int i=0;i<n;i++){
            if(et<nstart[i]){
                count++;
                et=nend[i];
            }
        }
       return count;
    }