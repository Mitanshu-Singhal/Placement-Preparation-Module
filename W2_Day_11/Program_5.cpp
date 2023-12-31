class Solution
{
    static int findPlatform(int arr[], int dept[], int n)
    {
        Arrays.sort(arr);
        Arrays.sort(dept);
        int i=0; 
        int j=0; 
        int count=0;
        int max=0;
        while(i<n){
            if(arr[i]<=dept[j]){
                count++;
                i++;
                max=Math.max(max,count);
            }
            else{
                count--;
                j++;
            }
        }
        return max;
    }
    
}
