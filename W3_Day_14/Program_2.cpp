int kthElement(int arr1[], int arr2[], int n, int m, int k)
    {
        int ans= 0;
        int i=0,j=0;
        
        while(k && i<n && j<m){
            if(arr1[i] < arr2[j]){
                ans= arr1[i];
                i++;
                
            }
            else{
                ans= arr2[j];
                j++;
                
            }
            
            k--;
        }
        
        if(k <= 0){
            return ans;
        }
        
        while(i<n && k){
            ans= arr1[i];
            i++;
            k--;
        }
        
        while(j<m && k){
            ans= arr2[j];
            j++;
            k--;
        }
        
        return ans;